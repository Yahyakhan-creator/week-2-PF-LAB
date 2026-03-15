#include <iostream>
using namespace std;

int main()
{
    int n;
    int num;

    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    int c5 = 0;

    cout << "Enter how many numbers: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout << "Enter number: ";
        cin >> num;

        if(num < 200)
        {
            c1++;
        }
        else if(num < 400)
        {
            c2++;
        }
        else if(num < 600)
        {
            c3++;
        }
        else if(num < 800)
        {
            c4++;
        }
        else
        {
            c5++;
        }
    }

    cout << "Under 200: " << (c1 * 100.0) / n << "%" << endl;
    cout << "200 to 399: " << (c2 * 100.0) / n << "%" << endl;
    cout << "400 to 599: " << (c3 * 100.0) / n << "%" << endl;
    cout << "600 to 799: " << (c4 * 100.0) / n << "%" << endl;
    cout << "800 to 1000: " << (c5 * 100.0) / n << "%" << endl;

    return 0;
}