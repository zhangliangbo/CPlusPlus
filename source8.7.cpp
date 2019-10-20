//
// Created by zhang on 2019/10/20.
//

#include "source8.7.h"

string version1(const string &s1, const string &s2) {
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}

const string &version2(string &s1, const string &s2) {
    s1 = s2 + s1 + s2;
    return s1;
}

const string &version3(string &s1, const string &s2) {
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}

int main8_7() {
    string input;
    string copy;
    string result;
    cout << "Enter a string:";
    getline(cin, input);

    copy = input;

    cout << "Your string as entered: " << input << endl;
    result = version1(input, "***");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;

    result = version2(input, "###");
    cout << "Your string-enhanced: " << result << endl;
    cout << "Your original string" << input << endl;

    cout << "Resetting original string.\n";
    input = copy;
    //试图引用释放的内存
    result = version3(input, "@@@");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your original string: " << input << endl;
    return 0;

}