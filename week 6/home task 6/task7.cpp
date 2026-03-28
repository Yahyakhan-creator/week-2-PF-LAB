#include <iostream>
using namespace std;

int main()
{
    string productNames[4];
    float prices[4];
    int quantity[4];

    cout << "Enter 4 product names:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> productNames[i];
    }

    cout << "Enter 4 prices:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> prices[i];
    }

    cout << "Enter 4 quantities:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> quantity[i];
    }

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        float total = prices[i] * quantity[i];

        cout << productNames[i] << ": $" << prices[i]
             << ", " << quantity[i] << " in stock, Total value: $" << total << endl;
    }

    return 0;
}