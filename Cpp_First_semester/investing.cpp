#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main () {
    double deposit, yield, interestRate, finalAmount;

    cout << "Enter your deposit amount: " << endl;
    cin >> deposit;

    cout << "Enter the interest rate (in percentage): " << endl;
    cin >> interestRate;

    yield = deposit * (interestRate / 100);
    cout << "Your yield is: " << yield << endl;

    std::this_thread::sleep_for(std::chrono::seconds(2));

    finalAmount = deposit + yield;
    cout << "Your final amount is: " << finalAmount << endl;

}