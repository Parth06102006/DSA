#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high)
{
    vector<int>temp_array;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left] <= arr[right])
        {
            temp_array.emplace_back(arr[left]);
            left++;
        }
        else
        {
            temp_array.emplace_back(arr[right]);
            right++;
        }
    }

    while(left<=mid)
    {
        temp_array.emplace_back(arr[left]);
        left++;
    }

    while(right<=high)
    {
        temp_array.emplace_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++)
    {
        arr[i] = temp_array[i-low];
    }

}

void mergeSort(vector<int> &arr,int low,int high)
{
    if(low==high) return;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
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
    int high = arr.size() - 1;
    mergeSort(arr,0,high);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

//The time complexity of this array is logbase2 N where whenever we divide the array into the number of parts it has logto the base in number of parts and the N where we would get the time complexity so 16->8->8 8->4 and 4 and 4-> 2 and 2 and 2 1 and 1 so almost it is divided into 2^4 = 16 for the worst case minum of the steps taken is as per the number of total elements so the time complaxity is O(N*log2(N)) it is the best avergae and the worst case and space complexity is O(N)