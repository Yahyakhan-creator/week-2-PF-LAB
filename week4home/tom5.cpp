#include <iostream>
using namespace std;
int main()
{
    int holi;
    cout << "enter the number of holidays in a year:";
    cin >> holi;
    int work;
    work = 365 - holi;
    int min;
    min = (work * 63 + holi * 127);
    cout << "the time to play is " << min << " minutes"<<endl;
    if (holi > 100)
    {53
        cout << "the cat will run away";
    }
    else
    {
        cout << "cat sleeps well.";
    }
    return 0;
}