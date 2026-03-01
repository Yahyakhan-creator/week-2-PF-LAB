#include <iostream>
using namespace std;

int main()
{
    int minutes;
    int fps;
    int frames;

    cout << "Enter minutes: ";
    cin >> minutes;

    cout << "Enter fps: ";
    cin >> fps;

    frames = minutes * 60 * fps;

    cout << "Total frames = " << frames << endl;

    return 0;
}