#include <iostream>
using  namespace std;
int main()
{int input;
    int multiply;
    cout<<"Enter a number:";
    cin>>input;
    for(int i=1;i<=10;i++)
    {multiply=input*i;
        cout<<input<<"*"<<i<<"="<<multiply<<endl;
    }
    return 0;
}
