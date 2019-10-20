//
// Created by zhang on 2019/10/20.
//

#ifndef CPLUSPLUS_SOURCE8_13_H
#define CPLUSPLUS_SOURCE8_13_H

#include <iostream>

struct job {
    char name[40];
    double salary;
    int floor;
};

template<typename T>
void Swap(T &a, T &b);

template<>
void Swap<job>(job &a, job &b);

void Show(job &j);

int main8_13();

#endif //CPLUSPLUS_SOURCE8_13_H
