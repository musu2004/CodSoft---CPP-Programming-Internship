// CodSoft Internship
// Domain Name - C++ Programming
// Task - 2 (Simple Calculator)
// Intern Name - Muskan Shaw

#include <iostream>
using namespace std;

int main() {
    int a, b, sum, div, mult, sub;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+': 
            sum = a + b;
            cout << "Sum: " << sum;
            break;
        case '-': 
            sub = a - b;
            cout << "Subtraction: " << sub;
            break;
        case '/': 
            div = a / b;
            cout << "Division: " << div;
            break;
        case '*': 
            mult = a * b;
            cout << "Multiplication: " << mult;
            break;
        default: 
            cout << "Enter a valid operator!";
    }

    return 0;
}
