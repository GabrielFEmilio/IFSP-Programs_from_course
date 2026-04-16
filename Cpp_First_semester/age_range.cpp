#include <iostream>
using namespace std;

int main() {
    int age;
    string name;
    
    cout << "Enter your name:" << endl;
    cin >> name;

    cout << "Enter your age:" << endl;
    cin >> age;

    if (age >= 0 && age <= 12) {
        cout << name << ", you are a child." << endl;
    }
    else if (age > 12 && age <= 20) {
        cout << name << ", you are a teenager." << endl;
    }
    else if (age > 20 && age <= 60) {
        cout << name << ", you are an adult." << endl;
    }
    else if (age >= 60) {
        cout << name << ", you are a senior." << endl;
    }
    else {
        cout << "Invalid age." << endl;
    }
    return 0;
}