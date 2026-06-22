bool isSorted(int arr[], int n) {
    if(n==0||n==1) return true;
    int i = 1;
    while(i<n && arr[i] >= arr[i-1])
    {
        if(i == n-1) return true;
        i++;
    }
    return false;
}