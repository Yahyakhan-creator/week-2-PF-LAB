#include <iostream>
using namespace std;
int main()
{
    int speed;
    cout << "Enter the speed:";
    cin >> speed;
    if (speed <= 10)
    {
        cout << "slow";
    }3
    else if (speed > 10 && speed <= 50)
    {
        cout << "average";
    }
    else if (speed > 50 && speed <= 150)
    {
        cout << "fast";
    }
    else if (speed > 150 && speed <= 1000)
    {
        cout << " super fast";
    }
    else     
    
       
        {

            cout << " extremly fast";
        }

    return 0;
}
