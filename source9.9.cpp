//
// Created by zhang on 2019/10/21.
//

#include "source9.9.h"

void str_count(const char *str) {
    using namespace std;
    static int total = 0;
    int count = 0;
    cout << "\"" << str << "\" contains ";
    while (*str++)
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}

const int ArSize = 10;

int main9_9() {
    using namespace std;
    char input[ArSize];
    char nextChar;

    cout << "Enter a line:\n";
    cin.get(input, ArSize);
    while (cin) {
        cin.get(nextChar);
        while (nextChar != '\n')
            cin.get(nextChar);
        str_count(input);
        cout << "Enter next line (empty line to quit):\n";
        cin.get(input, ArSize);
    }
    cout << "Bye\n";
    return 0;
}