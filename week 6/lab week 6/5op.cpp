#include <iostream>
using namespace std;
int main()

{
    int number;
    cout << "how many numbers you want to enter:";
    cin >> number;
    int n_array[number];
    for (int i = 0; i < number; i++)
    {
        cout << "enter the number:";
        cin >> n_array[i];
    }
    for (int i = 0; i < number; i++)
    {
        cout << n_array[i] << endl;
    }
    return 0;
}