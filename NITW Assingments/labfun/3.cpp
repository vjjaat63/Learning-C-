#include <iostream>
using namespace std;
double cpperitem(sp,profit);
int costprice(int 
int main() {
    double sp,profit;

    cout << "Enter the total selling price of 15 items: ";
    cin >> sp;
    cout << "Enter the total profit earned on these items: ";
    cin >>profit;
    cout << "The cost price of one item is: " <<cpperitem(sp,profit)<<endl;
    return 0;
    }
    double cpperitem(sp,profit)
    {

    double cp = sp - profit;
    double costPricePerItem = cp / 15;
    return costPricePerItem;
    return 0;
}

