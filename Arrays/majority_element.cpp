#include <bits/stdc++.h>
using namespace std;

// here in this problem we have to find the number with the occurence greater than N/2 where N is the size of the array
int majority_element_brute(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        int count=0;
        for(int j=0;j<arr.size();j++)
        {
            if(arr[i]==arr[j])count++;
        }
        if(count>(arr.size()/2)) return arr[i];
    }
}


//my solution
int majority_element_better(vector<int> arr)
{
    unordered_map<int,int> mpp;
    for(int i=0;i<arr.size();i++)
    {
        int a = arr[i];
        if(mpp.find(a) != mpp.end())
        {
            mpp[a] +=1;
        }
        mpp.insert({a,1});
    }

    for(auto it=mpp.begin();it!=mpp.end();it++)
    {
        if(it->second > (arr.size()/2)) return it->first;
    }
}

//striver solution and here Time Complexity is O(N)+O(NlogN) and moreover the space complexity is O(N) only if all the elements are unique
int majority_element_better_2(vector<int> arr)
{
    map<int,int> mpp;
    for(int i=0;i<arr.size();i++)
    {
        mpp[arr[i]]++;
    }

    for(auto it:mpp)
    {
        if(it.second > (arr.size()/2)) return it.first;
    }
    return -1;
}

//Here we would be using the Moore's Voting Algorithm 
int majority_element_optimal(vector<int> arr)
{
    int cnt=0;
    int el;
    for(int i=0;i<arr.size();i++)
    {
        if(cnt==0)
        {
            cnt=1;
            el = arr[i];
        }
        else if(arr[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==el) cnt1++;
    }

    if(cnt1>(arr.size()/2))
    {
        return el;
    }
        return -1;
}

int main()
{

}