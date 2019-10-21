//
// Created by zhang on 2019/10/21.
//

#include "source9.5.h"
#include "source9.6.h"

double warming = 0.3;
using namespace std;

int main9_5() {
    cout << "Global warming is " << warming << " degree.\n";
    update(0.1);
    cout << "Global warming is " << warming << " degree.\n";
    local();
    cout << "Global warming is " << warming << " degree.\n";
    return 0;
}
