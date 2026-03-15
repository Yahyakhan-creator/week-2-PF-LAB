#include <iostream>
using namespace std;
int main()
{int sum=0;
    cout << "first 5 natural numbers"<<endl;
    for (int i = 1; i <= 5; i=i+1)
    {
        
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}