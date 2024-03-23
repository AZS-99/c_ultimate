
// Created by Adam Saher on 2022-05-16.
//

#include <iostream>
#include <algorithm>
#include "J4.h"


Books::Books() {
    getline(std::cin, line);
    l = std::count(line.cbegin(), line.cend(), 'L');
    m = std::count(line.cbegin(), line.cend(), 'M');
    s = line.length() - m - l;

    l_section = line.substr(0, l);
    m_section = line.substr(l, m);
    s_section = line.substr(l + m);


}

unsigned Books::count_swaps() {
    auto l_section_Ms = std::ranges::count(l_section, 'M');
    auto l_section_Ss = std::ranges::count(l_section, 'S');
    auto m_section_Ls = std::ranges::count(m_section, 'L');
    auto m_section_Ss = std::ranges::count(m_section, 'S');
    auto s_section_Ms = std::ranges::count(s_section, 'M');
    auto s_section_Ls = std::ranges::count(s_section, 'L');


    auto single_swaps = std::min(l_section_Ss, s_section_Ls) + std::min(l_section_Ms, m_section_Ls) +
            std::min(m_section_Ss, s_section_Ms);
    auto double_swaps = std::max(l_section_Ss, s_section_Ls) - std::min(l_section_Ss, s_section_Ls);


    return single_swaps + double_swaps * 2;
}
