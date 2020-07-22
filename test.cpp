#include <iostream>
#include <cmath>
using namespace std;

void myFunction();
void printFullName(string firstName = "Ryan");
int add(int x, int y);
double add(double i, double j);
void swapNums(int &g, int &h);

int main() {
    string greeting = "Hello";
    string world = "world";
    cout << greeting + " " + world << "\n";
    cout << greeting.append(" ").append(world) << "\n";

    cout << "The length of \"string greeting\" is " << greeting.length() << "\n";
    cout << "The size of \"string greeting\" is " << greeting.size() << "\n";
    cout << "The first char in \"string greeting\" is " << greeting[0] << "\n";
    greeting[0] = 'J';
    cout << "Change the first char of \"string greeting\": " << greeting << "\n";

/*    string firstName;
    cout << "\n" << "Type your first name: ";
    cin >> firstName;
    cout << "Your first name is " + firstName << "\n";*/

    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your full name is " + fullName << "\n";

    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "\nThe max number is " << max(x, y) << ", and the min number is " << min(x, y) << "\n";
    cout << "The first number is greater than the second one: " << (x > y) << "\n";

    cout << "The square root of 64 is " << sqrt(64) << "\n";
    cout << "Rounds 2.6 = " << round(2.6) << "\n";
    cout << "log2 = " << log(2) << "\n";

    int time = 22;
    if (time < 10) {
        cout << "Good morning." << "\n";
    }else if (time < 20) {
        cout << "Good day." << "\n";
    }else {
        cout << "Good evening." << "\n";
    }

    int dollar = 20;
    //Ternary operator for simple if statement
    string result = dollar > 50 ? "Can buy lunch\n" : "Only can buy a drink\n";
    cout << result << "\n";

    int day = 8;
    string theDay;
    switch(day) {
        case 1:
            theDay = "Monday";
            break;
        case 2:
            theDay = "Tuesday";
            break;
        case 3:
            theDay = "Wednesday";
            break;
        case 4:
            theDay = "Thursday";
            break;
        case 5:
            theDay = "Friday";
            break;
        case 6:
            theDay = "Saturday";
            break;
        case 7:
            theDay = "Sunday";
            break;
        default:
            theDay = "No match";
    }
    cout << theDay << "\n";

    int a = 0;
    while (a < 5) {
        if (a == 3) {
            a++;
            continue;
        }
        cout << a << "\n";
        a++;
    }
    cout << "\n";

    int b = 0;
    do {
        cout << b << "\n";
        b++;
    }while (b < 5);
    cout << "\n";

    for (int i = 0; i < 10; i++) {
        if (i == 9)
            break;
        if (i == 4)
            continue;
        cout << i << "\n";
    }
    cout << "\n";

    string cars[4] = {"BMW", "Volvo", "Ford", "Renault"};
    cout << "car[0] original value is " << cars[0] << "\n";
    cars[0] = "Benz";
    cout << "car[0] new value is " << cars[0] << "\n";

    string food = "pizza";
    string &meal = food; //meal is reference
    string* ptr = &food; //create a pointer variable to store address of food variable
    cout << "food = " << food << "\n";
    cout << "food address = " << &food << "\n";
    cout << "meal = " << meal << "\n";
    cout << "food address from pointer variable: " << ptr << "\n";
    cout << "food value from pointer variable: " << *ptr << "\n"; // * act as a dereference operator

    *ptr = "Hamburger";
    cout << "After changing *ptr value: " << *ptr << "\n";
    cout << "food value: " << food << "\n";

    myFunction();
    printFullName("Duncan");
    printFullName();

    int addResult = add(5, 6);
    cout << "add function return value: " << addResult << "\n";
    double addResult2 = add(3.7, 43.9);
    cout << "add function for double parameter return value: " << addResult2 << "\n";

    int e = 35, f = 98;
    cout << "Before swapping: e = " << e << ", f = " << f << "\n";
    swapNums(e, f);
    cout << "After swapping: e = " << e << ", f = " << f << "\n";


    return 0;
}

void myFunction() {
    cout << "myFunction is just called" << "\n";
}

void printFullName(string firstName) {
    cout << "Full name is " << firstName.append(" Huang") << "\n";
}

int add(int x, int y) {
    return x + y;
}

double add(double i, double j) {
    return i + j;
}

void swapNums(int &g, int &h) {
    int c = g;
    g = h;
    h = c;
}
