#include <iostream>
using namespace std;

int main()
{
    double pay, hours, clothes, supplies, bonds, parents;

    cout << "Enter your pay per hour: ";
    cin >> pay;

    cout << "\nEnter your total hours per week: ";
    cin >> hours;

    hours *= 5;
    pay *= hours;

    cout << "\nIncome before taxes: " << pay;

    pay *= .86;
    cout << "\nIncome after taxes: " << pay;

    clothes = pay * .10;

    cout << "\nMoney spent on clothes: " << clothes;

    supplies = pay *.01;

    cout << "\nMoney spent on school supplies: " << supplies;

    bonds = .25 * (pay - clothes - supplies);

    cout << "\nMoney spent on savings bonds: " << bonds;

    parents = bonds * .5;

    cout << "\nMoney parents spend on bonds: " << parents;

}
