#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main () {
    int number, power_of_2, power_of_3;

    cout << "Enter a cardinal number: " << endl;
    cin >> number;

    power_of_2 = number * number;
    power_of_3 = number * number * number;

    cout << "The square of the number is: " << power_of_2 << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "The cube of the number is: " << power_of_3 << endl;
}