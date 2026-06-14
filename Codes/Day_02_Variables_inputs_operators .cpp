#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<sizeof(age)<<endl;
    char grade='A';
    cout<<grade<<endl;
    int val=grade;
    cout<<val<<endl;    //implicit type casting prints ASCII value of A
    double abc=99.99;
    int def=(int)abc;  // explicit type casting turn 99.99 to 99
    cout<<def<<endl;
    cout<<"enter the Age"<<endl;
    cin>>age;
    cout<<"your age is ="<<age<<endl; //Like in java we use + symbol here it is <<
    int a;
    int b;
    cout<<"enter the numbers to add"<<endl;// + - * / % are arithmatic operators;
    cin>>a;                                // % prints remainder after division
    cin>>b;                    
    cout<<"sum="<<(a+b)<<endl; 

    return 0;
} 
