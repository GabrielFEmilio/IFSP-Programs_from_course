#include <iostream>

using namespace std;

int main () {
    cout << "Enter your three grades: " << endl;
    double grade1, grade2, grade3, average;
    cin >> grade1 >> grade2 >> grade3;
    average = (grade1 + grade2 + grade3) / 3;

    cout << "Your average grade is: " << average << endl;
}