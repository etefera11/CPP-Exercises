#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double ordered, thickness, sqft, ratio, length, width;

    cout << "Enter the amount of premixed concrete (cubic yards): ";
    cin >> ordered;

    cout << "Enter the thickness (inches): ";
    cin >> thickness;

    cout << "Enter the ratio of length and width (feet): ";
    cin >> ratio;

    ordered *= 27; // conversion to cubic feet
    thickness /= 12; // conversion to feet
    sqft = ordered / thickness ; // conversion to square feet (ft^3/ft = ft^2)
    sqft = sqrt(sqft); // length and width before ratio
    length = ratio * sqft; // ratio applied to length
    width = sqft;

    cout << "Length is: " << length;

    cout << "Width is: " << width;

    return 0;


}
