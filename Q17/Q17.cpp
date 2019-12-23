#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double milk = 3.78;
    double total, cartons, totalcost, totalprofit, cost, profit;

    cout << "Enter the total amount of milk: ";
    cin >> total;

    cout << "Enter the cost per liter of milk: ";
    cin >> cost;

    cout << "Enter the profit per carton of milk: ";
    cin >> profit;

    cartons = total / milk;
    totalcost = total * cost;
    totalprofit = cartons * profit;

    cout << "\nNumber of milk cartons: "<< round (cartons);
    cout << "\nCost of producing milk: " << totalcost;
    cout << "\nProfit for producing milk: " << totalprofit;

    return 0;


}
