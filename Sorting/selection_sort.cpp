#include<bits/stdc++.h>
using namespace std;

void swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int min = i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[min]) min = j;
        }
        swap(&arr[min],&arr[i]);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    selection_sort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<' ';
    return 0;
}

//Time complexity is O((n*(n+1))/2) so we can say that the time complexity is about O(n^2) and this is the best,worst and average case scenario