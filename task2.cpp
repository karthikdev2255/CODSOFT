#include <iostream>

using namespace std;

int main() {
    double n1, n2;
    char op;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << n1 + n2 << endl;
            break;
        case '-':
            cout << "Result: " << n1 - n2 << endl;
            break;
        case '*':
            cout << "Result: " << n1 * n2 << endl;
            break;
        case '/':
            if (n2 != 0) {
                cout << "Result: " << n1 / n2 << endl;
            } else {
                cout << "Error: Division by zero" << endl;
            }
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }

    return 0;
}
