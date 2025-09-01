#include <iostream>
using namespace std;

// Function Prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulus_custom(int a, int b);

int main() {
    int choice;
    int num1, num2;

    while (true) {
        cout << "\n--- Calculator Menu ---" << endl;
        cout << "Press 1 for Addition (+)" << endl;
        cout << "Press 2 for Subtraction (-)" << endl;
        cout << "Press 3 for Multiplication (*)" << endl;
        cout << "Press 4 for Division (/)" << endl;
        cout << "Press 5 for Modulus (%)" << endl;
        cout << "Press 0 to Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the program. Thank you!" << endl;
            break;
        }

        if (choice < 0 || choice > 5) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                cout << "Addition of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Subtraction of " << num1 << " and " << num2 << " is " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Multiplication of " << num1 << " and " << num2 << " is " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Division of " << num1 << " and " << num2 << " is " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Modulus of " << num1 << " and " << num2 << " is " << modulus_custom(num1, num2) << endl;
                break;
        }
    }

    return 0;
}

// Function Definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int modulus_custom(int a, int b) {
    if (b == 0) {
        cout << "Error: Modulus by zero is not allowed." << endl;
        return 0;
    }
    return a % b;
}
