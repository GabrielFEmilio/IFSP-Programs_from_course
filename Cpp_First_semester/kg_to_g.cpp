#include <iostream>

using namespace std;

int main() {
    cout << "Enter your weight in kilograms: "<< endl;
    double kg, g;
    cin >> kg;
    g = kg * 1000;
    cout << "Your weight in grams is: " << g << endl;
}