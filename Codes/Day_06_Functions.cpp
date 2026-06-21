#include<iostream>
using namespace std;
//Just a function to print hello
int printhello() 
{
   cout<<"hello"<<endl;
   return 9;
}
//sum of two numbers
   int sum(int a,int b)
   {
      return a+b;
   }
   //calculate factorial of a number
   int factorial(int n)
   { 
      int fact=1;
      for(int i=1;i<n;i++)
      {
        fact=fact*i;
      }
      return fact;
   }
   //sum of digits of a number
   int sumofdigits(int n)
   {
      int sum=0;
      while(n>0)
      {
         sum=sum+n%10;
         n=n/10;
      }
      return sum;
   }
   //calculate ncr binomial coefficient for n and r
   int ncr(int n,int r)
   {
      int fact1=factorial(n);
      int fact2=factorial(r);
      int fact3=factorial(n-r);
      int res=fact1/(fact2*fact3);
      return res;
   }
int main() {
  int val=printhello();
  cout<<val<<endl;
  int result = sum(5, 3);
  cout << "Sum: " << result << endl;
  int fact = factorial(5);
  cout << "Factorial: " << fact << endl;
  int digitSum = sumofdigits(123);
  cout << "Sum of digits: " << digitSum << endl;
  int ncrResult = ncr(5, 2);
  cout << "NCr: " << ncrResult << endl;
  return 0;
} 
