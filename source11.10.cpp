//
// Created by zhang on 2019/11/2.
//

#include "source11.10.h"

Time::Time() {

}

Time::Time(int h, int m) {

}

void Time::addMin(int m) {

}

void Time::addHr(int h) {

}

void Time::reset(int h, int m) {

}

Time Time::operator+(const Time &t) const {
    return Time();
}

Time Time::operator-(const Time &t) const {
    return Time();
}

Time Time::operator*(double n) const {
    return Time();
}

std::ostream &operator<<(std::ostream &os, const Time &t) {
    os << t.hours << "hours, " << t.minutes << " minutes";
    return os;
}
