#include <iostream>
using namespace std;

int main()
{
    int money;
    int year;
    int age = 18;
    int total = 0;

    cout << "Enter money: ";
    cin >> money;

    cout << "Enter year: ";
    cin >> year;

    for (int y = 1800; y <= year; y++)
    {
        if (y % 2 == 0)
        {
            total = total + 12000;
        }
        else
        {
            total = total + 12000 + 50 * age;
        }

        age = age + 1;
    }

    if (money >= total)
    {
        cout << "Yes! He will live a carefree life and will have " << money - total << " dollars left." << endl;
    }
    else
    {
        cout << "He will need " << total - money << " dollars to survive." << endl;
    }

    return 0;
}