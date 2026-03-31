#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    if (num1 > num2) {
        cout << num1 << " is the biggest number." << endl;
    }
    else if (num1 < num2) {
        cout << num2 << " is the biggest number." << endl;
    }
    else {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
}