#include<iostream>
using namespace std;
int main()
{ 
   //square pattern
   for (int i = 0; i < 4; i++)
   {
      for(int j=0;j<4;j++){
         cout<<"*";
      }
      cout<<endl;
   }
     
     //continuous number pattern
     int num=1;
   for (int i = 0; i <3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
        cout<<num;
        num++;
      }
      cout<<endl;
      
   }
     
    //triangle pattern
     for (int i = 1; i <= 5; i++)
     {
      for (int  j = 1;j <=i; j++)
      {
        cout<<"*";
      }
      cout<<endl;
     }
      
     //reverse triangle
     for (int i = 0; i <5; i++)
      {
         for(int j=i+1;j>0;j--)
         {
            cout<<j;
         }
         cout<<endl;
      }
      // inverted triangle pattern
      for (int i = 0; i<=5; i++)
      {
        for(int j=0;j<i;j++)
        {
         cout<<" ";
        }
        for(int j=0;j<5-i;j++)
        {
        cout<<i+1;
        }
        cout<<endl;
      }
   
      //pyramid pattern
     for(int i=0;i<=5;i++)
     {
      for(int j=0;j<=5-i-1;j++)
      cout<<" ";
      for(int j=1;j<=i+1;j++)
      cout<<j;
      for(int j=i;j>0;j--)
      cout<<j;
      cout<<endl;  
   }
     
      // hollow diamond
    int n=5;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n-i-1;j++)
      cout<<" ";
       cout<<"*";
       if(i!=0)
       for(int j=0;j<2*i-1;j++)
      cout<<" ";
       cout<<"*";  
       cout<<endl;
    }
    for(int i=0;i<(n-1);i++)
    {
      for(int j=0;j<i+1;j++)
      cout<<" ";
      cout<<"*";
      if(i!=n-2)
      { 
         for(int j=0;j<2*(n-i)-5;j++)
      cout<<" ";
         cout<<"*";
      }
      cout<<endl;
    }
   return 0;
}
