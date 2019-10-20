//
// Created by zhang on 2019/10/20.
//

#ifndef CPLUSPLUS_SOURCE8_6_H
#define CPLUSPLUS_SOURCE8_6_H

#include <iostream>
#include <string>

struct free_throws {
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws &ft);

void set_pc(free_throws &ft);

free_throws &accumulate(free_throws &target, const free_throws &source);

int main8_6();

#endif //CPLUSPLUS_SOURCE8_6_H
