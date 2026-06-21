#include<iostream>
using namespace std;
//calculator
int add(int a,int b)
{
    return(a+b);
}
int subtract(int a,int b)
{
    return(a-b);
}
int multiply(int a,int b)
{
    return(a*b);
}
int divide(int a,int b)
{
    return(a/b);
}
int main()
{
    cout<<"enter 1st number"<<endl;
    int a;
    cin>>a;
    cout<<"enter operation to be performed"<<endl;
    char op;
    cin>>op;
    cout<<"enter 2nd number"<<endl;
    int b;
    cin>>b;

    if (op=='+')
    {
        cout<<add(a,b);
    }
    else if (op=='-')
    {
        cout<<subtract(a,b);
    }
    else if (op=='*')
    {
        cout<<multiply(a,b);
    }
    else if(op=='/')
    {
        cout<<divide(a,b);
    }
    else
    {
        cout<<"invalid"<<endl;
    }
    return 0;
}
