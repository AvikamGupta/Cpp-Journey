#include <iostream>
using namespace std;
//linear search function
int LinearSearch(int arr[], int size, int target)
{
   for(int i=0; i<size; i++)
   {
      if(arr[i] == target)
      {
         return i;
      }
   }
   return -1;
}
//two pointer approach to reverse an array
void ReverseArray(int arr[], int size)
{
   int start = 0;
   int end = size - 1;
   while(start < end)
   {
      swap(arr[start], arr[end]);
      start++;
      end--;
   }
}
int main()
{
   //both ways of initializing arrays are valid
   int a[5] = {1, 2, 3, 4, 5};
   double b[] = {1.1, 2.2, 3.3, 4.4, 5.5};
   cout << a[0]<<endl;
   sizeof(a);
   cout << sizeof(a)<<endl;
   //loops on arrays
   for(int i=0; i<5; i++)
   {
      cout << a[i] <<endl;
   }
   //linear search
   int index = LinearSearch(a, 5, 3);
   if(index != -1)
   {
      cout << "Element found at index: " << index << endl;
   }
   else
   {
      cout << "Element not found" << endl;
   }
   //reverse the array
   ReverseArray(a, 5);
   cout << "Array after reversing: ";
   for(int i=0; i<5; i++)
   {
      cout << a[i] <<endl;
   }
   return 0;
}
