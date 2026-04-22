#include <iostream>
using namespace std;
bool Symmetrical(int num)
{
    int first = num / 100;
    int last = num % 10;
    if (first == last)
        return true;
    else
        return false;
}
int main()
{
    int number;
    cout << "Enter a three digit number :";
    cin >> number;
    if (number >= 100 && number <= 999)
    {
        if (Symmetrical(number))
            cout << "THE NUMBER IS SYMMETRICAL" << endl;
        else
            cout << "The number is not symmetrical." << endl;
    }
    else
    {
        cout << "Please enter a valid three digit number." << endl;
    }

    return 0;
}