pair<long long, long long> getMinMax(long long a[], int n) {
    long long maxi = a[0];
    long long mini = a[0];
    for(int i = 1; i < n; i++){
        mini = min(mini,a[i]);
        maxi = max(maxi,a[i]);
    }
    return {mini,maxi};
}