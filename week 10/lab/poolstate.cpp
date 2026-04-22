#include <iostream>
#include <string>

using namespace std;

string calculatePoolState(int V, int P1, int P2, float H)
{
    // 1. Calculate total water filled by both pipes
    float totalWater = (P1 + P2) * H;

    // 2. Check for Overflow
    if (totalWater <= V)
    {
        // Calculate percentages
        int poolPercent = (totalWater / V) * 100;
        int p1Percent = ((P1 * H) / totalWater) * 100;
        int p2Percent = ((P2 * H) / totalWater) * 100;

        return "The pool is " + to_string(poolPercent) + "% full. Pipe 1: " +
               to_string(p1Percent) + "%. Pipe 2: " + to_string(p2Percent) + "%.";
    }
    else
    {
        // Calculate excess water
        float overflow = totalWater - V;
        return "For " + to_string(H) + " hours the pool overflows with " +
               to_string(overflow) + " liters.";
    }
}

int main()
{
    int V, P1, P2;
    float H;

    // Getting input from the user
    cout << "Enter pool volume (V): ";
    cin >> V;
    cout << "Enter flow rate of Pipe 1 (P1): ";
    cin >> P1;
    cout << "Enter flow rate of Pipe 2 (P2): ";
    cin >> P2;
    cout << "Enter hours worker was absent (H): ";
    cin >> H;

    // Calling the function and displaying the result
    cout << calculatePoolState(V, P1, P2, H) << endl;

    return 0;
}