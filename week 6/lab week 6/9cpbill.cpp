#include <iostream>
using namespace std;

int main()
{
    int coins[4];
    float due;
    float total;

    cout << "Enter quarters: ";
    cin >> coins[0];

    cout << "Enter dimes: ";
    cin >> coins[1];

    cout << "Enter nickels: ";
    cin >> coins[2];

    cout << "Enter pennies: ";
    cin >> coins[3];

    cout << "Enter the total amount due: $";
    cin >> due;

    total = (coins[0] * 0.25) + (coins[1] * 0.10) + (coins[2] * 0.05) + (coins[3] * 0.01);

    if (total >= due)
    {
        cout << "Can you pay the amount? Yes" << endl;
    }
    else
    {
        cout << "Can you pay the amount? No" << endl;
    }

    return 0;
}