#include <iostream>
using namespace std;
int main()
{
    float n;
    float sum=0;
    cout << "enter the number resistances in series circuit:" << endl;
    cin >> n;
    int arr[10];
    
    cout << "Enter resistances values " << n << "  one per line." << endl;


    for (int i = 0; i < n; i++)

    {
        cin >> arr[i];
        sum=sum+arr[i];
    }
   
    cout << "sum is " << sum << endl;
    return 0;
}
