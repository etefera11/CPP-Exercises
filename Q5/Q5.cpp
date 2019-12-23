#include <iostream>
using namespace std;

int main ()
{
    const double PI = 3.14;
    double radius, area, circumference;

    cout << "Enter the radius: ";
    cin >> radius;

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    cout << "\nArea = " << area;
    cout << "\nCircumference = " << circumference <<endl;

    return 0;

}
