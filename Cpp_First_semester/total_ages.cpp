#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    int less_21 = 0, between = 0, over_50 = 0, age;

    cout << "Enter ages (enter -99 to stop):" << endl;
    while (true) {
        cin >> age;
        if (age == -99) break;
        else if (age < 21) {
            less_21++;
        }
        else if (age <= 50) {
            between++;
        }
        else {
            over_50++;
        }
    }

    cout << "People under 21: " << less_21 << endl;
    this_thread::sleep_for(chrono::seconds(1));

    cout << "People between 21 and 50: " << between << endl;
    this_thread::sleep_for(chrono::seconds(1));

    cout << "People over 50: " << over_50 << endl;

    return 0;
}    