//
// Created by zhang on 2019/10/22.
//
#include <iostream>
#include "Source10_1.h"

void Source10_1::acquire(const std::string &co, long n, double pr) {
    company = co;
    if (n < 0) {
        std::cout << "Number of shares can't be negative;" << company << " shares set to 0.\n";
        shares = 0;
    } else {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Source10_1::buy(long num, double price) {

}

void Source10_1::sell(long num, double price) {

}

void Source10_1::update(double price) {

}

void Source10_1::show() {

}
