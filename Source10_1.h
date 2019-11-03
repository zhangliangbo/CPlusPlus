//
// Created by zhang on 2019/10/22.
//

#ifndef CPLUSPLUS_SOURCE10_1_H
#define CPLUSPLUS_SOURCE10_1_H

#include <string>

class Source10_1 {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    void acquire(const std::string &co, long n, double pr);

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};


#endif //CPLUSPLUS_SOURCE10_1_H
