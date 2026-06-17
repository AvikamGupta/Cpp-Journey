#include<iostream>
using namespace std;
int main()
{
   int n=1;
   cout<<"Using while loop:"<<endl;
   while(n<=5)//program to print numbers from 1 to 5
   {
      cout<<n<<endl;
      n++;
   }
   cout<<"Using for loop:"<<endl;
   for(int i=1;i<=5;i++)//program to print numbers from 1 to 5
   {
      cout<<i<<endl;
   }
   cout<<"Using do-while loop:"<<endl;
   int i=1;
   do
   {
    cout<<i<<endl;
    i++;
   } while (i<=5);
   cout<<"sum of oddnumbers 1 to n"<<endl;
   cout<<"enter range"<<endl;
   int range;
   cin>>range;
   int sum=0;
   for(int i=1;i<=range;i++)
   {
    if(i%2!=0)
    sum+=i;
   }
   cout<<sum<<endl;
   cout<<"to check if no. is prime"<<endl;
   int no;
   cout<<"enter a no."<<endl;
   cin>>no;
   int counter=0;
   for(int j=1;j<=no;j++)
   {
    if(no%j==0)
     counter++;
   }
   if(counter==2)
   cout<<"entered no. is prime"<<endl;
   else
   cout<<"entered no. is not prime"<<endl;
   cout<<"program of pattern using nested loop"<<endl;
   for (int i = 0; i < 5; i++)
   {
    for(int j=0;j<=5;j++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
   
   return 0;
}
