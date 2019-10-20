#include <iostream>
#include "strgback.h"
#include "source7.19.h"
#include "source8.2.h"
#include "source8.3.h"
#include "source8.4.h"
#include "source8.5.h"

using std::cout;
using std::endl;

int *pointerGet(int *p) {
    int i = 9;
    cout << "address of i " << &i << endl;
    cout << "content of i " << i << endl;
    p = &i;
    return p;
}

int sum_arr(const int *arr, int n) {
    cout << "the size of arr pointer is " << sizeof(arr) << endl;
    int total = 0;
    for (int i = 0; i < n; i++) {
        total = total + arr[i];
    }
    return total;
}

int main() {
    main8_5();
    return 0;
}