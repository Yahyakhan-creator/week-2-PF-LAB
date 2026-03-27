#include <iostream>
using namespace std;
int main()
{
    string number[5] = {"gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    string input;
    cout << "enter the movie name:";
    cin >> input;
    int price = 500;
    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        if ( number[i] == input)
        {
            found = true;
            if (i % 2 == 1)
            {
                cout << "5% discount" << endl;
                cout << "final price" << price - (price * 5 / 100) << endl;
            }
            else
            {
                cout << "10% discount" << endl;
                cout << "final price:" << price - (price * 10 / 100) << endl;
            }
        }
    }
    if (found == false)
    {
        cout << "movie not found" << endl;
    }
    return 0;
}