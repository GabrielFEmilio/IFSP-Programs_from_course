#include <iostream>

using namespace std;

int main () {
    double celsius, fahrenheit;

    cout << "Enter the temperature in Celsius: " << endl;
    cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;
    cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;
}