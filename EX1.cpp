#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    cout<< "Digite dois números para subtrair: "<< endl;
    int num1, num2, sub;
    cin>> num1>>num2;
    sub = num1 - num2;
    cout<< "A subtração é: "<< sub << endl;
}