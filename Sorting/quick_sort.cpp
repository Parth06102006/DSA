#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high)
{
    int pivot = arr[low];
    int i=low;
    int j = high;
    while(i<j)
    {
        while(arr[i] <= pivot && i<=high-1)
        {
            i++;
        }

        while(arr[j] > pivot && j>=low+1)
        {
            j--;
        }

        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(pivot,arr[j]);
    return j;
}

void qs(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
        int pIndex = partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}

vector<int> quickSort(vector<int> &arr)
{
    qs(arr,0,arr.size()-1);
    return arr;
}

int main()
{    
    int n;
    cin>>n;
    cout<<"The number of the elements "<<n<<endl;
    vector<int> arr;
    for (int i=0;i<n;i++)
    {
        int number;
        cin>>number;
        arr.emplace_back(number);
    }
    quickSort(arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

// The Time Complexity here is NlogN space complaxity is O(1) here we would iterate in all the eleemnts so it is O(N) and it is logN