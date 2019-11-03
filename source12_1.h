//
// Created by zhang on 2019/11/3.
//

#ifndef CPLUSPLUS_SOURCE12_1_H
#define CPLUSPLUS_SOURCE12_1_H

#include <iostream>

class StringBad {
private:
    char *str;
    int len;
    static int num_strings;
public:
    StringBad(const char *s);

    StringBad();

    ~StringBad();

    friend std::ostream &operator<<(std::ostream &os, const StringBad &bad);

    static void setNumStrings(int numStrings);
};


#endif //CPLUSPLUS_SOURCE12_1_H
