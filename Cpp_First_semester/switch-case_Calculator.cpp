#include <iostream>
#include <clocale>
#include <cstdio>

using namespace std;

int main() {
    setlocale(LC_ALL, "English");

    int n1, n2, option;

    cout << "--- CALCULATOR ---" << endl;
    
    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    cout << "\nWhat would you like to do?\n";
    cout << "1 - Add\n";
    cout << "2 - Subtract\n";
    cout << "3 - Multiply\n";
    cout << "4 - Divide\n";
    cout << "Your choice: ";
    cin >> option;

    switch (option) {
        case 1:
            cout << "Result of Addition: " << n1 + n2 << endl;
            break;

        case 2:
            cout << "Result of Subtraction: " << n1 - n2 << endl;
            break;

        case 3:
            cout << "Result of Multiplication: " << n1 * n2 << endl;
            break;

        case 4:
            if (n2 != 0) {
                cout << "Result of Division: " << n1 / n2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;

        default:
            cout << "Invalid option!" << endl;
            return 1;
    }

    return 0;
}