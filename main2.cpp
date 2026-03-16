#include <iostream>
using namespace std;

template <typename T>
void calculator(T val1, T val2) {

    cout << "\n--- Calculation Results ---" << endl;
    cout << "Addition:       " << val1 + val2 << endl;
    cout << "Subtraction:    " << val1 - val2 << endl;
    cout << "Multiplication: " << val1 * val2 << endl;

    if (val2 != 0)
        cout << "Division:       " << val1 / val2 << endl;
    else
        cout << "Division:       Error (Division by zero)" << endl;
}

int main() {

    int choice;

    cout << "Choose data type:" << endl;
    cout << "1. Integer" << endl;
    cout << "2. Decimal" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {

        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;

        calculator(a, b);

    } 
    else if (choice == 2) {

        double a, b;
        cout << "Enter two decimal numbers: ";
        cin >> a >> b;

        calculator(a, b);

    } 
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}