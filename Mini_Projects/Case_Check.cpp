#include<iostream>
using namespace std;
int main(){ //this is to check upper and lower case characters;
    cout<<"Enter a charachter:"<<endl;
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<"Lowercase letter"<<endl;
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<"Uppercase letter"<<endl;
    }
    else
    {
        cout<<"Not a letter"<<endl;
    }
    return 0;
}
