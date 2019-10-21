//
// Created by zhang on 2019/10/21.
//

#include "source9.6.h"

using std::cout;

extern double warming;

void update(double dt) {
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees.\n";
}

void local() {
    double warming = 0.8;
    cout << "Local warming = " << warming << " degrees.\n";
    cout << "But global warming = " << ::warming << " degrees.\n";
}