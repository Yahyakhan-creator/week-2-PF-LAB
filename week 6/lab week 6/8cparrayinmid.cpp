#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> n1;

    int arr1[2];

    cout << "Enter 2 elements for the first array, one per line:" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements for the second array: ";
    cin >> n2;

    int arr2[100];

    cout << "Enter " << n2 << " elements for the second array, one per line:" << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << "Resulting array: [";

    cout << arr1[0];

    for (int i = 0; i < n2; i++)
    {
        cout << ", " << arr2[i];
    }

    cout << ", " << arr1[1] << "]" << endl;

    return 0;
}