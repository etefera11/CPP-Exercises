#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    ifstream in;
    ofstream out;

    in.open("inData.txt");

    if (in.is_open())
        cout << "Success, file is open";

    else
    {
        cout << "Failure, file is not open";
        in.close();
    }

    out.open("outFile.txt");
    cout << endl;

    if (out.is_open())
        cout << "Success, file is open";

    else
    {
        cout << "Failure, file is not open";
        out.close();
    }

    out << fixed << showpoint <<setprecision(2);
    string firstName, lastName, department;

    in >> firstName >> lastName >> department;

    out << "Name: " << firstName << " " << lastName << ", Department: " << department;

    double salary, bonus, taxes, payCheck;

    in >> salary >> bonus >> taxes;

    out << "\nMonthly Gross Salary: $" << salary << ", Monthly Bonus: " << bonus << "%, Taxes: " << taxes << "%";

    bonus = salary * bonus / 100;
    salary += bonus;
    taxes = salary * taxes / 100;
    payCheck = salary - taxes;

    out << "\nPaycheck: $" << payCheck;

    double miles, time, speed, coffee, cost, sales;

    in >> miles >> time;

    speed = miles / time;

    out << "\n\nDistance Traveled: " << miles << " miles, Traveling Time: " << time << " hours\n";
    out << "Average Speed: " << speed << " miles per hour\n\n";

    in >> coffee >> cost;

    sales = coffee * cost;

    out << "Number of Coffee Cups Sold: " << coffee << ", Cost: $" << cost << " per cup\n";
    out << "Sales Amount = $" << sales;



}
