#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum;

    cout << "Enter sides: ";
    cin >> n;

    if(n >= 3)
    {
        sum = (n - 2) * 180;
        cout << "Sum of angles = " << sum << endl;
    }
    else
    {
        cout << "Polygon does not exist" << endl;
    }

    return 0;
}