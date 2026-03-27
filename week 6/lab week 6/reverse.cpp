#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements:";
    cin >> n;
    if (n <= 0)
    {
        cout << "invalid input. number of elements should be above 0." << endl;
        /* code */
    }
    else
    {
        int arr[100];
        cout << "enter " << n << " digits one per line" << endl;
    
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            /* code */
        }
        cout << "number in reverse order:";
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i] << "  "; /* code */
        }
    }

        return 0;
    }