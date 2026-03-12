#include <iostream>
using namespace std;
int main()
{
    int temp1;
    int temp2;
    int diff;
    cout << "enter first temp:";
    cin >> temp1;
    cout << "enter second temp:";
    cin >> temp2;
    diff = temp1 - temp2;
    if (diff > 10)
    {
        cout << "difference is so big program ends";
    }
    else
    {
        cout << "program ends";
    }
    return 0;
}