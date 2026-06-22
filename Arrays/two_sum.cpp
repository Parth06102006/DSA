#include <bits/stdc++.h>
using namespace std;

void two_sum(vector<int> arr,int target)
{
    vector<vector<int>> v2;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<"Yes"<<endl;
                v2.push_back({i,j});
            }
        }
    }
}

//my solution
void two_sum_hash(vector<int> arr,int target)
{
    vector<int> hash = {0};
    for(int i=0;i<arr.size();i++)
    {
        hash[arr[i]] += 1;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(hash[target-arr[i]])
        {
            cout<<"Yes"<<endl;
            cout<<i<<" and "<<target-arr[i]<<endl;
        }
    }
}


//striver's solution
string two_sum_hashmap(vector<int> arr,int target)
{
    map<int,int> mpp;
    for(int i=0;i<arr.size();i++)
    {
        int a = arr[i];
        int more = target-a;
        if(mpp.find(more) != mpp.end()){
            return "YES";
        }
        mpp[a]=i;
    }
    return "NO";
}

//if we not have to return the index but just the yes or no then the two pointer approach is also a good approach
string two_sum_two_pointer(vector<int> arr,int target)
{
    int left=0,right=arr.size()-1;
    while(left<right)
    {
        if(arr[left]+arr[right]<target)
        {
            left++;
        }
        else if(arr[left]+arr[right]>target)
        {
            right--;
        }
        else
        {
            return "YES";
        }
    }
    return "NO";
}

int main()
{

}