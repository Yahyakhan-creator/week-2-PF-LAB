#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of elements:" << endl;
    cin >> n;
    int arr[10];
    
    cout << "Enter  " << n << "  number one per line." << endl;


    for (int i = 0; i < n; i++)

    {
        cin >> arr[i];
    }
    int high = arr[0];
    for (int i = 1; i < n;i++)
    {
        if (arr[i] > high)
        {
            high = arr[i];
        }
    }
    cout << "largest number entered is" << high << endl;
    return 0;
}
