#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers to check if their sum is equal to 120: " << endl;
    cin >> num1 >> num2;
    if (num1 + num2 == 120) {
        cout << "The sum of " << num1 << " and " << num2 << " is equal to 120." << endl;
    }
    else {
        cout << "The sum of " << num1 << " and " << num2 << " is not equal to 120." << endl;
    }
    return 0;
}