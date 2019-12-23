#include <iostream>
using namespace std;

int main()
{
    int seconds, minutes, hours;

    cout << "Enter the number: ";
    cin >> seconds;

    hours = seconds / 3600;
    minutes = (seconds - hours * 3600) / 60;
    seconds = seconds - (hours *3600 + minutes * 60);

    cout << hours << ":" << minutes << ":" << seconds;

    return 0;
}
