#include <iostream>
using namespace std;
int value1=5;
int value2=10;

int sum()
{
    value1=20;
    return value1+value2;
}
int main()
{
    int x=value1;
    value1=100;
    x=20;
    value2=sum();
    cout<<value1<<"" <<value2; 
    return 0;
}