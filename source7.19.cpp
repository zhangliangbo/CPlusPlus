//
// Created by zhang on 2019/10/19.
//

#include "source7.19.h"

const double *f1(const double *ar, int n) {
    return ar;
}

const double *f2(const double *ar, int n) {
    return ar + 1;
}

const double *f3(const double *ar, int n) {
    return ar + 2;
}

int main7_19() {
    using namespace std;
    double av[3] = {11123, 1542.6, 2227.9};
    const double *(*p1)(const double *, int) =f1;
    auto p2 = f2;
    cout << "Using pointers to functions:\n";
    cout << "Address Value\n";
    cout << (*p1)(av, 3) << ":" << *(*p1)(av, 3) << endl;
    cout << p2(av, 3) << ":" << *p2(av, 3) << endl;

    //pa an array of pointers
    const double *(*pa[3])(const double *, int) ={f1, f2, f3};
    auto pb = pa;
    cout << "\nUsing an array of pointers to functions:\n";
    cout << "Address Value:\n";
    for (int i = 0; i < 3; i++) {
        cout << pa[i](av, 3) << ":" << *pa[i](av, 3) << endl;
    }
    cout << "\nUsing a pointer to a pointer to a function:\n";
    cout << "Address Value\n";
    for (int i = 0; i < 3; i++) {
        cout << pb[i](av, 3) << ":" << *pb[i](av, 3) << endl;
    }

    //a pointer to an array of function pointers
    cout << "\nUsing pointers to an array of function pointers:\n";
    cout << "Address Value\n";
    //easy way
    auto pc = &pa;
    cout << (*pc)[0](av, 3) << ":" << *(*pc)[0](av, 3) << endl;
    //hard way
    const double *(*(*pd)[3])(const double *, int) =&pa;
    const double *pdb = (*pd)[1](av, 3);
    cout << pdb << ": " << *pdb << endl;
    //alternative notation
    cout << (*(*pd)[2])(av, 3) << ":" << *(*(*pd)[2])(av, 3) << endl;
    return 0;
}