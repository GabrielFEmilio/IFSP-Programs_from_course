#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main () {
    int number;

    cout << "Enter a cardinal number: " << endl;
    cin >> number;

    cout << "Multiplication table of " << number << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
        this_thread::sleep_for(chrono::seconds(1));
    }
    return 0;
}