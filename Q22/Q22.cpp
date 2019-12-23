#include <iostream>
using namespace std;

int main()
{
    const double ton = 2205;
    double pounds, bags;

    cout << "Enter the number of pounds a bag can hold: ";
    cin >> pounds;

    bags = ton / pounds;

    cout << bags;

    return 0;


}
