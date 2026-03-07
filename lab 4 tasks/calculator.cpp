#include <iostream>
using namespace std;
main()
{
    cout<<"welcome to the calculator.";
    int first;
    cout<<"Enter first number?";
    cin>>first;
    cout<<"enter operation:";
    char op;
    cin>>op;
    int sec;
    cout<<"enter 2 number?";
    cin>>sec;
    if (op=='+')
{
    cout<<"result ="<< first-sec<<endl;
}
  else
{
    if(op=='-')
    
  { 
 cout<<"result ="<<first+sec<<endl;
}
  
    else
{
if (op=='*')
{
        cout<<"result = "<<first/sec<<endl;
    }
  else
{if(op=='/')
  {  
cout<<"result ="<<first*sec<<endl;
}
    else
{cout<<"invalid input";}
    }

}
}
    return 0;
}