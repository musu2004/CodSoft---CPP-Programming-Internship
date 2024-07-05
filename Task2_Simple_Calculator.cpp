// CodSoft Internship
// Domain Name - C++ Programming
// Task - 2 (Simple Calculator)
// Intern Name - Muskan Shaw

#include <iostream>
using namespace std;

int main() {
    int a, b, sum, div, mult, sub;
    char op;

    cout << "\n Simple Calculator :- \n";

    cout << "\nEnter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+': 
            sum = a + b;
            cout << "Sum: " << sum << "\n";
            break;
        case '-': 
            sub = a - b;
            cout << "Subtraction: " << sub << "\n";
            break;
        case '/': 
            if (a == 0){
                cout << "Error: Division by zero is not allowed." << "\n";
            } else {
                cout << "Division: " << a / b << "\n";
            }
            break;
        case '*': 
            mult = a * b;
            cout << "Multiplication: " << mult << "\n";
            break;
        default: 
            cout << "Enter a valid operator!" << "\n";
    }
    cout << "Thank You\n\n" ;

    return 0;
}