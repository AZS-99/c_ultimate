//
// Created by Adam Saher on 2022-08-19.
//

#include <fstream>
#include <iostream>
#include <algorithm>
#include "J5S3.h"



J5_S3::J5_S3(){
    std::ifstream file("Data/CCC/2000/J5_S3");
    unsigned count, index, end_index;
    SiteNode* node, *child;
    std::string line, site;
    file >> count;


    for (auto i = 0u; i < count; ++i) {
        getline(file, line);

        node = create_node(line);


        do {
            getline(file, line);
            auto links = J5_S3::extract_links(line);
            for (auto& link: links) {
                child = create_node(link);
                node->links.push_back(child);
            }

        } while(line != "</HTML>");
    }

    run(file);
}



std::vector<std::string> J5_S3::extract_links(const std::string& line) {
    std::vector<std::string> links;
    size_t index_begin = 0u, index_end = 0u;
    while (true) {
        index_begin = line.find("<A HREF=", index_end);
        if (index_begin == std::string::npos) return links;
        index_begin += 9;
        index_end = line.find("\">", index_begin);
        links.push_back(line.substr(index_begin, index_end - index_begin));
    }
}

SiteNode* J5_S3::create_node(const std::string& line) {
    unsigned index;
    SiteNode* node;
    if (link_numeration.contains(line)) {
        index = link_numeration[line];
        node = sites[index];
    } else {
        node = new SiteNode(sites.size());
        link_numeration.insert({line, sites.size()});
        sites.push_back(node);
    }
    return node;
}

bool J5_S3::path_possible(const std::string& src, const std::string& destination) {
    SiteNode* src_node = sites[link_numeration[src]];
    SiteNode* dest_node = sites[link_numeration[destination]];
    return path_possible(src_node, dest_node);

}

bool J5_S3::path_possible(SiteNode* src, SiteNode* destination) {
    src->visited = true;
    if (std::ranges::any_of(src->links, [this, destination](SiteNode* neighbour) {
        return !neighbour->visited && (neighbour == destination || path_possible(neighbour, destination));
    })) return true;

    return false;
}

void J5_S3::reset_nodes() {
    for (auto& site: sites) site->visited = false;
}

void J5_S3::run(std::ifstream& file) {
    std::string src, destination;
    while (true) {
        getline(file, src);
        if (src == "The End") break;
        getline(file, destination);
        std::cout << std::boolalpha << path_possible(src, destination) << std::endl;
        reset_nodes();
    };
}


SiteNode::SiteNode(const unsigned& value) {
    this->value = value;
}
