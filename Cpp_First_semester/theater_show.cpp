#include <iostream>

using namespace std;

int main () {
    int playPrice, ticketPrice, minimalRevenue;

    cout << "Enter the price of the theater show: " << endl;
    cin >> playPrice;

    cout << "Enter the price of a ticket: " << endl;
    cin >> ticketPrice;

    minimalRevenue = playPrice / ticketPrice;
    cout << "The minimal revenue to cover the costs of the show is: " << minimalRevenue << " tickets." << endl;
}