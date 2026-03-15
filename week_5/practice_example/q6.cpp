#include <iostream>
using namespace std;
int main()
{
    int total=0;
    int number=0;
    cout<<"Enter a number:";
    cin>>number;
   while(number>=0)
    {total=total+number;
        cout<<"Enter a number:";
    cin>>number;

}
cout<<"sum="<<total;
return 0;   
    
}