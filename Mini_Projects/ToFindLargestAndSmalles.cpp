#include<iostream>
using namespace std;
int main()
{
    //to find smalles and largest number in an array
    cout<<"Enter the size of the array: ";
    int size;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    cout << "Smallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;
    return 0;
}
