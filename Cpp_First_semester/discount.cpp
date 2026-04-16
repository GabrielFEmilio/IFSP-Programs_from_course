#include <iostream>
using namespace std;

int main() {
    double price, final_price, discount;

    cout << "Enter the full price of the purchase:" << endl;
    cin >> price;

    if (price <= 50.00) {
        discount = 0.10;
    }
    else if (price >= 50.00 && price <= 100.00) {
        discount = 0.15;
    }
    else if (price >= 100.00) {
        discount = 0.20;
    }
    else {
        cout << "Invalid price." << endl;
        return 1;
    }

    final_price = price - (price * discount);

    cout.setf(ios::fixed);
    cout.precision(2);    

    cout << "The final price is: R$" << final_price << endl;

    return 0;
}