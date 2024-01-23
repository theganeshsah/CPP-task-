#include <iostream>
using namespace std;
int main()
{
int n1,n2;
char op;
cout<<"enter 1st number : ";
cin>>n1;
cout<<"enter basic operation(+,-,*,/) : ";
cin>>op;
cout<<"enter 2nd number : ";
cin>>n2;
switch (op)
{
case '+':
    cout<<n1+n2<<endl;
    break;
case '-':
    cout<<n1-n2<<endl;
    break;
case '*':
    cout<<n1*n2<<endl;
    break;
case '/':
    cout<<n1/n2<<endl;
    break;

default:
    cout<<"enter a valid! operator "<<endl;
    break;
}
}