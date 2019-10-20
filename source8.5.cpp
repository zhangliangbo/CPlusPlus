//
// Created by zhang on 2019/10/20.
//

#include "source8.5.h"

double cube(double a) {
    a *= a * a;
    return a;
}

double refcube(double &ra) {
    ra *= ra * ra;
    return ra;
}

int main8_5() {
    using namespace std;
    double x = 3.0;
    cout << cube(x) << "= cube of " << x << endl;
    cout << refcube(x) << "= cube of " << x << endl;
    return 0;
}