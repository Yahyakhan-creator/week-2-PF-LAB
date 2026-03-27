#include <iostream>
using namespace std;
int main()
{
    int number[5];
     for(int i = 0 ; i < 5; i++)
    {
        cout << "enter a number:";
        cin >> number[i];
    }
    int high = number[0];
    for (int i = 0; i < 5; i++)
    {
        if (number[i] > high)
        {
            high = number[i];
        }
    }
    cout << "highest value is " << high << endl;
    return 0;
}
