#include<bits/stdc++.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int didSwap = 0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0)
        {
            break;
        }
    }
}

int main()
{
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) std::cin>>arr[i];
    bubble_sort(arr,n);
    for(int i=0;i<n;i++) std::cout<<arr[i]<<' ';
    return 0;
}

//the complexity in this case also is the O(n^2) which is the worst time complexity but for the best case time complexity it would be  O(N) as if the array is already sorted then there would be no swapping done so there is no swapping done then it would be the waste of time to do swapping then yeah the best case scenario is O(N)