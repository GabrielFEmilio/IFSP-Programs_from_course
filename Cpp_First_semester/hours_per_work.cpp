#include <iostream>

using namespace std;

int main () {
    double hoursWorked, hourlyRate, salary;
    cout << "Enter your hours worked: " << endl;
    cin >> hoursWorked;
    cout << "Enter your hourly rate: " << endl;
    cin >> hourlyRate;
    salary = hoursWorked * hourlyRate;
    cout << "Your salary is: " << salary << endl;

}