#include <iostream>
using namespace std;

int main()
{
    double quarters, nickels, dimes, pennies;

    cout << "Enter the number of quarters: ";
    cin >> quarters;
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << "Enter the number of dimes: ";
    cin >> dimes;

    pennies = (quarters * 25)+ (nickels * 5) + (dimes * 10);

    cout << "\nTotal value in pennies: " << pennies;

    return 0;

}
