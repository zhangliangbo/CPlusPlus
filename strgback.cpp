//
// Created by zhang on 2019/10/17.
//

#include <iostream>
#include "strgback.h"

int strgbackMain() {
    using namespace std;
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildStr(ch, times);
    cout << "build str is " << ps << endl;
    delete[] ps;
    ps = buildStr('+', 20);
    cout << ps << "-DONE-" << ps << endl;
    delete[] ps;
    return 0;
}

char *buildStr(char c, int n) {
    char *pStr = new char[n + 1];
    pStr[n] = '\0';
    while (n-- > 0) {
        pStr[n] = c;
    }
    return pStr;
}
