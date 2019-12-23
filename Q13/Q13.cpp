#include <iostream>
using namespace std;

int main()
{
    double price1, markup, markupPrice, salestax, tax, finalprice;

    cout << "Enter original price: ";
    cin >> price1;

    cout << "Enter markup percent: ";
    cin >> markup;

    cout << "Enter sales tax rate: ";
    cin >> salestax;

    markupPrice = price1 + (markup/100) * price1;
    tax = (salestax/100) * markupPrice;
    finalprice = markupPrice + tax;

    cout << "\nOriginal Price: " << price1;
    cout << "\nMarkup percent: " << markup;
    cout << "\nSelling Price: " << markupPrice;
    cout << "\nSales tax rate: " << salestax;
    cout << "\nSales tax: " << tax;
    cout << "\nFinal Price: " << finalprice;

    return 0;


}
