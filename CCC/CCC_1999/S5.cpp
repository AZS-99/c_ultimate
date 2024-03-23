//
// Created by Adam Saher on 2022-04-07.
//

#include <string>
#include <regex>
#include <iostream>
#include <limits>

#include "S5.h"

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::stringstream ss(str);
    std::vector<std::string> vec;
    std::string line;
    while(getline(ss, line, delimiter)) vec.push_back(line);
    return vec;
}


unsigned long find_close_parenthesis(const std::string& str, const unsigned& open_parenthesis_index = 0) {
    auto open_parenthesis_count = 0u;
    for (auto i = open_parenthesis_index; i < str.size(); ++i) {
        if (str[i] == '(') ++open_parenthesis_count;
        else if (str[i] == ')' && --open_parenthesis_count == 0)  return i;
    }
    return std::string::npos;
}


void remove_redundant_parentheses(std::string& str) {
    auto close_parenthesis_index = find_close_parenthesis(str);
    if (close_parenthesis_index == str.size() - 1) {
        str.erase(str.size() - 1);
        str.erase(0, 1);
        remove_redundant_parentheses(str);
    }
}


std::string multiply(const std::string& terms1, const std::string& terms2) {
    auto terms_vec1 = split(terms1, '+');
    auto terms_vec2 = split(terms2, '+');
    std::string result;
    for (auto& term1: terms_vec1) {
        for (auto& term2: terms_vec2)
            result.append(term1 + term2 + '+');
    }
    result.pop_back(); // Remove the last appended '+'
    return result;
}



std::string expand(std::string& str) {
    remove_redundant_parentheses(str);
    if (str.find('(') == std::string::npos)
        return str;
    //First case ab(d+c)(...) or ab+(d+c)(...)
    if (std::isalpha(str[0])) {
        auto index = str.find_first_of("+(");
        auto first_term = str.substr(0, index);
        if (str[index] == '+') {
            auto second_term = str.substr(index + 1);
            return first_term + '+' + expand(second_term);
        }
        auto second_term = str.substr(index);
        return multiply(first_term, expand(second_term));
    //Second case (a+b)(d+c)(...) or (a+b)+(d+c)(....)
    } else {
        auto first_term_closing_index = find_close_parenthesis(str);
        auto first_term = str.substr(0, first_term_closing_index + 1);
        if (str[first_term_closing_index + 1] == '+') {
            auto second_term = str.substr(first_term_closing_index + 2);
            return expand(first_term) + '+' + expand(second_term);
        }
        auto second_term = str.substr(first_term_closing_index + 1);
        std::cout << "first_term: " << first_term << ", second_term: " << second_term << std::endl;
        return multiply(expand(first_term), expand(second_term));
    }
}
