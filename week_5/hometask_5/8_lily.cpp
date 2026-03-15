#include <iostream>
using namespace std;

int main()
{
    int age;
    int machinePrice;
    int toyPrice;
    int toys = 0;
    int money = 0;
    int cashMoney = 10;

    cout << "Enter Lilly's age: " << endl;
    cin >> age;

    cout << "Enter price of the washing machine: " << endl;
    cin >> machinePrice;

    cout << "Enter unit price of each toy: " << endl;
    cin >> toyPrice;

    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
        {
            money = money + cashMoney - 1;
            cashMoney = cashMoney + 10;
        }
        else
        {
            toys = toys + 1;
        }
    }

    money = money + (toys * toyPrice);

    if (money >= machinePrice)
    {
        cout << "Yes! " << money - machinePrice << endl;
    }
    else
    {
        cout << "No! " << machinePrice - money << endl;
    }

    return 0;
}