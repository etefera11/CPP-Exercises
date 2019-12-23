#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double speedA, speedB, hours, min, total, distanceA, distanceB, totaldist, shortest;

    cout << "Enter the average speed of car A: ";
    cin >> speedA;

    cout << "Enter the average speed of car B: ";
    cin >> speedB;

    cout << "Enter the hours elapsed: ";
    cin >> hours;

    cout << "Enter the minutes elapsed: ";
    cin >> min;


    total = hours + (min / 60);

    distanceA = speedA * total;
    distanceB = speedB * total;

    totaldist = (distanceA * distanceA) + (distanceB * distanceB);
    shortest = sqrt(totaldist);

    cout << "\n\nShortest distance between A and B: " << shortest << " miles";

    return 0;



}
