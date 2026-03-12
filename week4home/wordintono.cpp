#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter number from 0 to 100: ";
    cin >> number;

    int tens = number / 10;
    int ones = number % 10;

    if (number == 100)
    {
        cout << "one hundred";
    }
    else
    {
        if (tens == 0)
        {
            if (ones == 0) cout << "zero";
            else if (ones == 1) cout << "one";
            else if (ones == 2) cout << "two";
            else if (ones == 3) cout << "three";
            else if (ones == 4) cout << "four";
            else if (ones == 5) cout << "five";
            else if (ones == 6) cout << "six";
            else if (ones == 7) cout << "seven";
            else if (ones == 8) cout << "eight";
            else if (ones == 9) cout << "nine";
        }
        else
        {
            if (tens == 2) cout << "twenty ";
            else if (tens == 3) cout << "thirty ";
            else if (tens == 4) cout << "forty ";
            else if (tens == 5) cout << "fifty ";
            else if (tens == 6) cout << "sixty ";
            else if (tens == 7) cout << "seventy ";
            else if (tens == 8) cout << "eighty ";
            else if (tens == 9) cout << "ninety ";

            if (ones == 1) cout << "one";
            else if (ones == 2) cout << "two";
            else if (ones == 3) cout << "three";
            else if (ones == 4) cout << "four";
            else if (ones == 5) cout << "five";
            else if (ones == 6) cout << "six";
            else if (ones == 7) cout << "seven";
            else if (ones == 8) cout << "eight";
            else if (ones == 9) cout << "nine";
        }
    }

    return 0;
}