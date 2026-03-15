#include <iostream>
using namespace std;
int main()
{
    int input;
    int num=1;
        cout<< "enter a number";
    cin >> input;
    for (int i = input; i >= 1; i--)
    {
        num = num * i;
    }
    cout << "factorial_=" << num;
    return 0;
}