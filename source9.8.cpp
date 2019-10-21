//
// Created by zhang on 2019/10/21.
//

#include "source9.8.h"

extern int tom;
static int dick = 10;
int harry = 200;

void remote_access() {
    using namespace std;
    cout << "remote_access() reports the following addresses:\n";
    cout << &tom << " =&tom, " << &dick << " =&dick, " << &harry << " =&harry\n";
}