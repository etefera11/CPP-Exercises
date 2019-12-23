#include <iostream>
using namespace std;

int main()
{
    double gb, temp,realGB;

    cout << "Enter the hard drive size: ";
    cin >> gb;

    temp = gb * 1000 * 1000 * 1000;

    realGB = temp / (1024 * 1024 * 1024);

    cout << "\nActual size: " << realGB;

    return 0;
}
