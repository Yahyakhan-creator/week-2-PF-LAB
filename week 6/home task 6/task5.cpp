#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;
    char letter;

    cout << "Enter number of customers: ";
    cin >> n;

    string names[100];

    cout << "Enter the names of " << n << " customers:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }

    cout << "Enter a letter to check: ";
    cin >> letter;

    for (int i = 0; i < n; i++)
    {
        if (names[i][0] == letter)
        {
            count++;
        }
    }

    cout << "Total names starting with '" << letter << "': " << count << endl;

    return 0;
}