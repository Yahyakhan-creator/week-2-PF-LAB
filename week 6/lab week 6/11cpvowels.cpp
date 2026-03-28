#include <iostream>
using namespace std;

int main()
{
    char vowel[100];

    cout << "Enter a string: ";
    cin.getline(vowel, 100);

    int i = 0;

    cout << "String with vowels removed: ";

    while (vowel[i] != '\0')
    {
        if (vowel[i] != 'a' && vowel[i] != 'e' && vowel[i] != 'i' && vowel[i] != 'o' && vowel[i] != 'u')
        {
            cout << vowel[i];
        }

        i++;
    }

    cout << endl;

    return 0;
}