#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1;
    string str2 = "caterpillar";
    string str3(str2);

    cout << "Is str1 empty? " << str1.empty() << endl;
    cout << "str1 length = " << str1.length() << endl;
    cout << "str2 length = " << str2.length() << endl;
    cout << "str3 length = " << str3.length() << endl;

    cout << "Is str1 and str2 the same? " << (str1 == str2) << endl;
    cout << "Is str2 and str3 the same? " << (str2 == str3) << endl;

    string name = "caterpillar";
    char str[] = "Justin";
    name = str;

    //str = name;  // error: cannot assign string to a char[]

    for (auto ch: name) {
        cout << ch << endl;
    }

    name = u8"我你他";
    cout << "u8 string length = " << name.length() << endl;
    for (int i = 0; i < name.length(); i+=3) {
        cout << name.substr(i, 3) << endl;
    }

    return 0;
}
