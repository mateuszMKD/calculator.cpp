#include <iostream>
using namespace std;

int main() {
    char op;
    double first, second;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> first >> second;

    switch (op) {
        case '+':
            cout << first << " + " << second << " = " << first + second;
            break;

        case '-':
            cout << first << " - " << second << " = " << first - second;
            break;

        case '*':
            cout << first << " * " << second << " = " << first * second;
            break;

        case '/':
            if (second != 0)
                cout << first << " / " << second << " = " << first / second;
            else
                cout << "Cannot divide by zero";
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}
