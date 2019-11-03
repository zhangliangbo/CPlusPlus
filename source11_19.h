//
// Created by zhang on 2019/11/2.
//

#ifndef CPLUSPLUS_SOURCE11_19_H
#define CPLUSPLUS_SOURCE11_19_H


class Stonewt {
private:
    enum {
        Lbs_per_stn = 14
    };
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);

    Stonewt(int stn, double lbs);

    Stonewt();

    ~Stonewt();

    void show_lbs() const;

    void show_stn() const;

    operator int() const;

    operator double() const;
};


#endif //CPLUSPLUS_SOURCE11_19_H
