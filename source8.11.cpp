//
// Created by zhang on 2019/10/20.
//

#include "source8.11.h"

template<typename T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main8_11() {
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i,j=" << i << "," << j << ".\n";
    cout << "Using compiler-generated in swapper:\n";
    Swap(i, j);
    cout << "Now i,j=" << i << ", " << j << ".\n";

    double x = 24.5;
    double y = 81.7;
    cout << "x,y=" << x << "," << y << ".\n";
    cout << "Using compiler-generated double swapper:\n";
    Swap(x, y);
    cout << "Now x,y=" << x << "," << y << ".\n";
    return 0;
}