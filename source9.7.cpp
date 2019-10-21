//
// Created by zhang on 2019/10/21.
//

#include "source9.7.h"
#include "source9.8.h"

int tom = 3;
int dick = 30;
static int harry = 300;

int main9_7() {
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " =&tom, " << &dick << " =&dick, " << &harry << " =&harry\n";
    remote_access();
    return 0;
}