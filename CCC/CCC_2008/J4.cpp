//
// Created by Adam Saher on 2022-11-15.
//

#include "J4.h"


std::string pre_to_post(const std::string& pre) {
    if (pre.size() == 1) return pre;
    if (pre.size() == 3 )  return pre.substr(1) + pre[0];
    if (isdigit(pre[1])) return "";

}