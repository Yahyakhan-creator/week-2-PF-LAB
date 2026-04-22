#include <iostream>
#include <string>

using namespace std;

string timeTravel(int h, int m)
{
    // 1. Add the travel time
    m = m + 15;

    // 2. If minutes exceed 59, increase the hour
    if (m >= 60)
    {
        m = m - 60;
        h = h + 1;
    }

    // 3. If hours exceed 23, reset to 0 (next day)
    if (h >= 24)
    {
        h = 0;
    }

    // 4. Convert numbers to string and join them
    // Format is "hh:mm"
    string result = to_string(h) + ":" + to_string(m);

    return result;
}

int main()
{
    int hours, minutes;

    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;

    // Call function and print the return value
    cout << timeTravel(hours, minutes) << endl;

    return 0;
}