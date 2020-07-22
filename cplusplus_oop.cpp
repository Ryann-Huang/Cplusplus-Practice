#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass() {
            cout << "MyClass constructor is called!\n";
        }

        int myNum;
        string myString;
        void myMethod(int a, int b); // outside class definition

        // inside class definition
        void myMethod2() {
            cout << "function from inside of class:MyClass\n";
        }
};

void MyClass::myMethod(int a, int b) {
    cout << "function defined outside of class:MyClass\n";
    cout << "calculation result = " << (a + b) << "\n";
}

int main() {
    MyClass myObj; //不用new就有物件了

    myObj.myNum = 15;
    myObj.myString = "Some text";

    cout << "myObj.myNum = " << myObj.myNum << "\n";
    cout << "myObj.myString = " << myObj.myString << "\n";

    myObj.myMethod(1, 3);
    myObj.myMethod2();

    return 0;
}
