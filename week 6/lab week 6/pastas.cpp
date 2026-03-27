#include <iostream>
using namespace std;
int main()
{
    string pasta[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int sold[5];

    int total = 0;
    int high = 0;
    int low = 0;

    for (int id = 0; id < 5; id++)
    {
        cout << "total number of pastas sold" << pasta[id] << ":" << endl;
        cin >> sold[id];
        total = total + sold[id];
    }
    for (int id = 1; id < 5; id++)
    {
        if (sold[id] > sold[high])
        {
            high = id;
        }

        if (sold[id] < sold[low])
        {
            low = id;
        }
    }

    cout << endl;
    cout << "Pasta Sales Report" << endl;
    cout << "------------------" << endl;

    for (int id = 0; id < 5; id++)
    {
        cout << pasta[id] << ": " << sold[id] << endl;
    }

    cout << endl;
    cout << "Total sales: " << total << endl;
    cout << "Highest selling product: " << pasta[high] << endl;
    cout << "Lowest selling product: " << pasta[low] << endl;

    return 0;
}