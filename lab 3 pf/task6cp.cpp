#include <iostream>
using namespace std;

int main()
{
    int mb;
    int kb;
 int bytes;
int bits;

    cout << "Enter the size in megabytes (MB): ";
    cin >> mb;

    kb = mb * 1024;
    bytes = kb * 1024;
    bits = bytes * 8;

    cout << mb << " MB is equivalent to " << bits << " bits" << endl;

    return 0;
}