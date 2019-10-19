//
// Created by zhang on 2019/10/19.
//

#include "source8.3.h"

int main8_3() {
    using namespace std;
    int rats = 101;
    int &rodents = rats;

    cout << "rats=" << rats << ", rodents=" << rodents << endl;

    cout << "rats address=" << &rats << ", rodents address=" << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;

    cout << "bunnies=" << bunnies << ", rats=" << rats << ", rodents=" << rodents << endl;
    cout << "bunnies address=" << &bunnies << ", rodents address=" << &rodents << endl;

    return 0;
}