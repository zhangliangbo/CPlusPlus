//
// Created by zhang on 2019/10/22.
//

#include "source9.13.h"

void other() {
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    int i;
    for (i = 0; i < 3; i++) {
        getDebt(zippy[i]);
    }
    for (i = 0; i < 3; i++) {
        showDebt(zippy[i]);
    }
    cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
}

void another() {
    using pers::Person;
    Person collector = {"Milo", "Rightshift"};
    pers::showPerson(collector);
    std::cout << std::endl;
}

int main9_13() {
    using debts::Debt;
    using debts::showDebt;
    Debt golf = {{"Benny", "Goatsniff"},
                 120.0};
    showDebt(golf);
    other();
    another();
    return 0;
}
