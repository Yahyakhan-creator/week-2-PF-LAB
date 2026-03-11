#include <iostream>
using namespace std;
int main()
{
    string country;
    int discount;
    cout << "Enter the country name:";
    cin >> country;
    int price;
    cout << "Enter the ticket price:";
    cin >> price;
    int finalprice;
    if (country == "ireland")
    {
        finalprice = ((price / 100) * 10);
    }
    else
    {
        finalprice = ((price / 100) * 5);}
        discount==price-finalprice;
        cin>>discount;
        cout << "the final price after discount is " << discount << endl;
        return 0;
    }