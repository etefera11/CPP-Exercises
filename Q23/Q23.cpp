#include <iostream>
using namespace std;

int main()
{
    double shares, purprice, sellprice, invested, invested1, profit, total, com = .015, com1 = .015, recieved;

    cout << "Enter number of shares sold: ";
    cin >> shares;

    cout << "Enter the purchase price: ";
    cin >> purprice;

    cout << "Enter the selling price: ";
    cin >> sellprice;

    invested = shares * purprice;
    invested1 = shares * sellprice;
    com *= invested;
    com1 *= invested1;
    total = com + com1;
    profit = invested1 - invested;
    recieved = invested1 - com1;

    cout << "\nAmount invested: " << invested;
    cout << "\nTotal service charges: " << total;
    cout << "\nAmount gained or lost: " << profit;
    cout << "\nAmount recieved: " << recieved;

    return 0;


}
