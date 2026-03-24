#include <iostream>

using namespace std;

int main () {
    cout << "Enter your main salary: " << endl;
    double salary, newSalary;
    cin >> salary;
    newSalary = salary * 1.25;
    cout << "Your new salary is: " << newSalary << endl;
}