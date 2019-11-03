//
// Created by zhang on 2019/11/2.
//

#ifndef CPLUSPLUS_SOURCE11_10_H
#define CPLUSPLUS_SOURCE11_10_H

#include <iostream>

class Time {
private:
    int hours;
    int minutes;
public:
    Time();

    Time(int h, int m = 0);

    void addMin(int m);

    void addHr(int h);

    void reset(int h = 0, int m = 0);

    Time operator+(const Time &t) const;

    Time operator-(const Time &t) const;

    Time operator*(double n) const;

    friend Time operator*(double m, const Time &t) { return t * m; }

    friend std::ostream &operator<<(std::ostream &os, const Time &t);
};

#endif //CPLUSPLUS_SOURCE11_10_H
