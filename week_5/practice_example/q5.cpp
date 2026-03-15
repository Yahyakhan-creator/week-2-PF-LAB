#include <iostream>
using namespace std;
int main()
{
    int total=0;
    int input;
    int c=1;
    while(c<=5)
    {
    cout<<"Enter a number"<<c<<":";
    cin>>input;
    total=total+input;
    c++;
    }
    cout<<"total sum = "<<total;
    return 0;

}