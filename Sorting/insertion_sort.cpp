#include<bits/stdc++.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion_sort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j = i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(&arr[j],&arr[j-1]);
            j--;
        }
    }
}

int main()
{
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) std::cin>>arr[i];
    insertion_sort(arr,n);
    for(int i=0;i<n;i++) std::cout<<arr[i]<<' ';
    return 0;
}

//the complexity in this case also is the O(n^2) which is the worst time complexity but for the best case time complexity it would be  O(N) as if the array is already sorted then there would be no swapping done so there is no swapping done then it would be the waste of time to do swapping then yeah the best case scenario is O(N)