#include <iostream>
using namespace std;
int main()
{
    int element[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter the " << i+1 << " number" << endl;
        cin >> element[i];
    }
    cout << "the second number is:" << element[2]<<endl;
    cout << "the fourth number is:" << element[4]<<endl;
    return 0;
}