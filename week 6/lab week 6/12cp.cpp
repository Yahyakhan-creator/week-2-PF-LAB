#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements of the array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int special = 1; // assume true

    for (int i = 0; i < n; i++)
    {
        // even index → even number
        if (i % 2 == 0)
        {
            if (arr[i] % 2 != 0)
            {
                special = 0;
            }
        }
        // odd index → odd number
        else
        {
            if (arr[i] % 2 == 0)
            {
                special = 0;
            }
        }
    }

    if (special == 1)
    {
        cout << "The array is special" << endl;
    }
    else
    {
        cout << "The array is not special" << endl;
    }

    return 0;
}