#include<bits/stdc++.h>
using namespace std;

int countOccurrences(int arr[], int n, int x)
{
    int res = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          res++;
    return res;
}

int main()
{
    int arr[] = {1,3,2,3,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    cout << countOccurrences(arr, n, x);
    return 0;
}
