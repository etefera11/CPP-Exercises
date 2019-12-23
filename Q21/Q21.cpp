#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double k = 6.67 * pow(10, -8);
    double f, m1, m2, d;

    cout << "Enter mass of body 1: ";
    cin >> m1;

    cout << "Enter mass of body 2: ";
    cin >> m2;

    cout << "Enter distance between the two bodies: ";
    cin >> d;

    f = (k*m1*m2)/(d*d);

    cout << f;

     return 0;

}
