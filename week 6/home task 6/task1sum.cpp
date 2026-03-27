#include <iostream>
using namespace std;
int main()
{
    float n;
    float sum=0;
    cout << "enter the number of elements:" << endl;
    cin >> n;
    int arr[10];
    
    cout << "Enter number " << n << "  one per line." << endl;


    for (int i = 0; i < n; i++)

    {
        cin >> arr[i];
        sum=sum+arr[i];
    }
   
    cout << "sum of all elements is" << sum << endl;
    return 0;
}