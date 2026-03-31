#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "enter two numbers, the biggest number will be subtracted from the smallest: " << endl;
    cin >> num1 >> num2;
    if (num1 > num2) {
        cout << num1 - num2 << " is the result of subtracting the biggest number from the smallest." << endl;
    }
    else if (num1 < num2) {
        cout << num2 - num1 << " is the result of subtracting the biggest number from the smallest." << endl;
    }
    else {
        cout << "Both numbers are equal, so the result is 0." << endl;
    }
    return 0;

}