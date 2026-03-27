#include <iostream>
using namespace std;
int main()
{
    int n;
    int unique = 0;
    cout << "enter the number of elements:" << endl;
    cin >> n;
    int arr[10];
    cout << "Enter  "<<   n << "  number one per line." << endl;
     int numb;
       
    for (int i = 0; i < n; i++)

    { cin >> numb;
       
        bool already = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == numb)
            {
                already=true;
                break;
            }
        }
        if (already==1)
        {
            cout << "already entered" << numb << endl;
        }
        else
        {
            arr[unique] = numb;
            unique++;
        }
    }
    cout << "unique numbers entered:";
    for (int k = 0; k < unique; k++)
    {
        cout << arr[k] << " ";
    }
}