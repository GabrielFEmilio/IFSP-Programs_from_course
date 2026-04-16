#include <iostream>

using namespace std;

int main() {
    int region, city, pricePerson, numPeople, fullPrice;

    int pricePerson = 0;

    cout << "Enter the Region you are traveling to:" << endl;
    cout << "1 - Inside Brazil" << endl;
    cout << "2 - Outside Brazil" << endl;
    cin >> region;

    switch (region) {
        case 1:
            cout << "Enter the city you are traveling to:" << endl;
            cout << "1 - Rio de Janeiro" << endl;
            cout << "2 - Salvador" << endl;
            cout << "3 - Porto Alegre" << endl;
            cin >> city;

            switch (city) {
                case 1:
                    pricePerson = 700;
                    break;
                case 2:
                    pricePerson = 900;
                    break;
                case 3:
                    pricePerson = 880;
                    break;
                default:
                    cout << "Invalid city choice." << endl;
                    return 1;
            }
            break;
        case 2:
            cout << "Enter the city you are traveling to:" << endl;
            cout << "1 - New York" << endl;
            cout << "2 - Paris" << endl;
            cout << "3 - Cancun" << endl;
            cout << "4 - Madrid" << endl;
            cin >> city;

            switch (city) {
                case 1:
                    pricePerson = 2200;
                    break;
                case 2:
                    pricePerson = 3550;
                    break;
                case 3:
                    pricePerson = 3900;
                    break;
                case 4:
                    pricePerson = 4000;
                    break;
                default:
                    cout << "Invalid city choice." << endl;
                    return 1;
            }
            break;
        default:
            cout << "Invalid region choice." << endl;
            return 1;
    }

    cout << "Enter the number of people traveling: " << endl;
    cin >> numPeople;

    fullPrice = pricePerson * numPeople;
    cout << "The total price for the trip is: R$" << fullPrice << endl;
    
    return 0;
}