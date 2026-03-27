#include <iostream>
using namespace std;

int main()
{
    string word;

    cout << "Enter a string: ";
    cin >> word;

    cout << "Reversed String: ";

    // loop from last index to first
    for (int i = word.length() - 1; i >= 0; i--)
    {
        cout << word[i];
    }

    cout << endl;

    return 0;
}