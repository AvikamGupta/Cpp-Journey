#include<iostream>
#include<vector>
using namespace std;
int main()
{
   //declaring vector
   vector<char>vec={'A','B','C','D','E'};
   vector<int>vec2;//size , value stored at every index
   for(char i:vec)
   cout<<i<<endl;
   //vector functions 
   cout<<"size of vec="<<vec.size()<<endl;
   vec2.push_back(18);
   vec2.push_back(19);
   vec2.push_back(20);
   cout<<"after pushback function size="<<vec2.size()<<endl;
   for(int i:vec2)
   cout<<i<<endl;
   vec2.pop_back();
   cout<<"after popback function size="<<vec2.size()<<endl;
   for(int i:vec2)
   cout<<i<<endl;
   cout<<vec2.front()<<endl;
   cout<<vec2.back()<<endl;
   cout<<vec2.at(0);
   return 0;
}
