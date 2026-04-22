#include <iostream>
using namespace std;

int checkOddish(int num)
{
    int sum = 0;

    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    if (sum % 2 != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int input;
    cout << "Enter a five-digit number: ";
    cin >> input;

    int result = checkOddish(input);

    // Interpret the result
    if (result == 1)
    {
        cout << "Oddish" << endl;
    }
    else
    {
        cout << "Evenish" << endl;
    }

    return 0;
}