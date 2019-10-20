//
// Created by zhang on 2019/10/20.
//

#include "source8.13.h"

template<typename T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<>
void Swap<job>(job &a, job &b) {
    double t1;
    int t2;
    t1 = a.salary;
    a.salary = b.salary;
    b.salary = t1;

    t2 = a.floor;
    a.floor = b.floor;
    b.floor = t2;
}

void Show(job &j) {
    using namespace std;
    cout << j.name << ": $" << j.salary << " on floor " << j.floor << endl;
}

int main8_13() {
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j= " << i << ", " << j << ".\n";
    cout << "Using compiler-generated in swapper:\n";
    Swap(i, j);
    cout << "i, j= " << i << ", " << j << ".\n";
    job sume = {"Susan Yaffee", 73000.60, 7};
    job sidney = {"Sidney Taffee", 78060.72, 9};
    cout << "Before job swapping:\n";
    Show(sume);
    Show(sidney);
    Swap(sume, sidney);
    cout << "After job swapping:\n";
    Show(sume);
    Show(sidney);
    return 0;
}