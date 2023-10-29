#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    int maxi = arr[n-1];
    int maxi_2 = -1;
    for(int i = n - 2; i >= 0 ; i--){
        if(arr[i] != maxi){
            maxi_2 = arr[i];
            break;
        }
    }
    return maxi_2;
}