#include <iostream>
using namespace std;
int main()
{

    string arr[5];
    cout << "Enter  5  names one per line." << endl;

    for (int i = 0; i < 5; i++)

    {
        cin >> arr[i];
    }
    cout<<"student names are:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}