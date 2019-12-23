#include <iostream>
using namespace std;

int main()
{
    double capacity, mpg, miles;

    cout << "Enter tank capacity: ";
    cin >> capacity;

    cout << "\nEnter miles per gallon: ";
    cin >> mpg;

    miles = mpg * capacity;

    cout << "\nThe number of miles is: "<< miles;

    return 0;

}
