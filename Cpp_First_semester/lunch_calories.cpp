#include <iostream>
using namespace std;

int main() {
    int food, dessert, drink;
    int totalCalories, choice1, choice2, choice3;

    totalCalories = 0;
    
    cout << "Enter the main food:" << endl;
    cout << "1 - Vegetarian" << endl;
    cout << "2 - Fish" << endl;
    cout << "3 - Chicken" << endl;
    cout << "4 - Meat" << endl;
    cin >> food;

    switch (food) {
        case 1:
            totalCalories = totalCalories + 180;
            break;
        case 2:
            totalCalories = totalCalories + 230;
            break;
        case 3:
            totalCalories = totalCalories + 250;
            break;
        case 4:
            totalCalories = totalCalories + 350;
            break;
        default:
            cout << "Invalid main food choice." << endl;
            return 1;
    }

    cout << "Enter the dessert:" << endl;
    cout << "1 - Pineapple" << endl;
    cout << "2 - Diet Ice Cream" << endl;
    cout << "3 - Diet Mousse" << endl;
    cout << "4 - Chocolate Mousse" << endl;
    cin >> dessert;

    switch (dessert) {
        case 1:
            totalCalories = totalCalories + 75;
            break;
        case 2:
            totalCalories = totalCalories + 110;
            break;
        case 3:
            totalCalories = totalCalories + 170;
            break;
        case 4:
            totalCalories = totalCalories + 200;
            break;
        default:
            cout << "Invalid dessert choice." << endl;
            return 1;
    }

    cout << "Enter the drink:" << endl;
        cout << "1 - Tea" << endl;
    cout << "2 - Orange Juice" << endl;
    cout << "3 - Melon Juice" << endl;
    cout << "4 - Diet Soda" << endl;
    cin >> drink;

    switch (drink) {
        case 1:
            totalCalories = totalCalories + 20;
            break;
        case 2:
            totalCalories    = totalCalories + 70;
            break;
        case 3:
            totalCalories = totalCalories + 100;
            break;
        case 4:
            totalCalories = totalCalories + 65;
            break;
        default:
            cout << "Invalid drink choice." << endl;
            return 1;
    }

    cout << "Total calories consumed: " << totalCalories << endl;

    return 0;
}