#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'y')
        {
            str[i] = str[i] + 1;
        }
        else if (str[i] == 'z')
        {
            str[i] = 'a';
        }
        

        i++;
    }

    cout << "Shifted String: " << str << endl;

    return 0;
}