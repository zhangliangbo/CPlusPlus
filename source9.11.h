//
// Created by zhang on 2019/10/22.
//

#ifndef CPLUSPLUS_SOURCE9_11_H
#define CPLUSPLUS_SOURCE9_11_H

#include <string>

namespace pers {

    struct Person {
        std::string fname;
        std::string lname;
    };

    void getPerson(Person &);

    void showPerson(const Person &);
}

namespace debts {

    using namespace pers;

    struct Debt {
        Person name;
        double amount = 0;
    };

    void getDebt(Debt &);

    void showDebt(const Debt &);

    double sumDebts(const Debt ar[], int n);
}
#endif //CPLUSPLUS_SOURCE9_11_H
