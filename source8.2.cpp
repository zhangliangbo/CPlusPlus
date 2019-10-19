//
// Created by zhang on 2019/10/19.
//

#include "source8.2.h"

int main8_2() {
    using namespace std;
    int rats = 101;
    int &rodents = rats;
    cout << "rats=" << rats << ", rodents=" << rodents << endl;
    rodents++;
    cout << "rats=" << rats << ", rodents=" << rodents << endl;
    cout << "rats address=" << &rats << ", rodents address=" << &rodents << endl;
    return 0;
}