#include <iostream>
using namespace std;

int main()
{
    const double pi = 3.14;
    double l, r, a;

    cout << "Enter the length: ";
    cin >> l;

    r = l / 2;
    a = pi * r * r;

    cout << "\nRadius: " << r;
    cout << "\nArea: " << a;

    return 0;
}
