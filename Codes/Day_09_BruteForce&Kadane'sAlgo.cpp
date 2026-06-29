#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // concept for subarray
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    // concept of max subarray using brute force approach
    int maxsum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int cursum = 0;
        for (int end = st; end < n; end++)
        {
            cursum += arr[end];
            maxsum = max(cursum, maxsum);
        }
    }
    cout << "maxsum (brute force) = " << maxsum << endl;
    // concept of max subarray using Kadane's algorithm approach
    int cursm = 0;
    int maxsm = INT_MIN;
    for (int val : arr)
    {
        cursm += val;
        maxsm = max(cursm, maxsm);
        if (cursm < 0)
            cursm = 0;
    }
    cout << "maxsum (Kadane's) = " << maxsm << endl;

    return 0;
}
