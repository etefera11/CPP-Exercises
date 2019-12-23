#include <iostream>
using namespace std;

int main()
{
    double com, percent, cost, max, min;

    cout << "Enter fixed commission: ";
    cin >> com;
    cout << "Enter percentage commission: ";
    cin >> percent;
    cout << "Enter purchasing cost: ";
    cin >> cost;
    cout << "Enter minimum to be added to purchasing cost: ";
    cin >> min;
    cout << "Enter maximum to be added to purchasing cost: ";
    cin >> max;

    min += cost;
    max += cost;

    cout << "\nMinimum selling price: " << min;
    cout << "\nMaximum selling price: " << max;

    min = (min * (percent/100)) + com;
    max = (max * (percent/100)) + com;

    cout << "\nCommission range: " << min << " - " << max;

    return 0;



}
