#include <iostream>
#include <ctime>

using namespace std;

int main () {
    cout << "Enter your born year: " << endl;
    int bornYear, year, age;
    cin >> bornYear;
    time_t now = time(nullptr);

    tm* data_local = localtime(&now);
    year = data_local->tm_year + 1900;

    age = year - bornYear;
    cout << "Your age is: " << age << endl;
}