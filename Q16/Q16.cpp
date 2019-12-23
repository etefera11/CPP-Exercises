#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double milk = 3.78,
    cost = 0.38,
    profit = 0.27;
    double total, cartons, totalcost, totalprofit;

    cout << "Enter the total amount of milk: ";
    cin >> total;

    cartons = total / milk;
    totalcost = total * cost;
    totalprofit = cartons * profit;

    cout << "\nNumber of milk cartons: "<< round (cartons);
    cout << "\nCost of producing milk: " << totalcost;
    cout << "\nProfit for producing milk: " << totalprofit;

    return 0;


}
