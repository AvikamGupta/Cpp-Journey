#include<iostream>
using namespace std;
int main(){
    int n=45;
    if(n>0){
        cout<<"Positive number"<<endl;
    }
    else{
        cout<<"Negative number"<<endl;
    }
cout<<"Enter your grade:"<<endl;
int grade;
cin>>grade;
if(grade>=90)
{
    cout<<"A"<<endl;
}
else if(grade>=80)
{
    cout<<"B"<<endl;
}
else
{
    cout<<"C"<<endl;
}
return 0;
}
