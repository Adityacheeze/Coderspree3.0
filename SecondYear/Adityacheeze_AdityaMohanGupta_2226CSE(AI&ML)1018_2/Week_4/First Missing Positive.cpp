#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    sort(arr, arr+n);
    int i = 0;
    while(arr[i] < 1 && i < n){
        i++;
    }
    if( i == n-1){
        return 1;
    }
    if(arr[i] != 1){
        return 1;
    }
    int j;
    for(j = i; j < n - 1; j++){
        if(arr[j+1] - arr[j] != 1 ){
            return arr[j] + 1;
        }
    }
    return arr[j] + 1;
}