#include <bits/stdc++.h>
using namespace std;

vector<int> sum(vector<int> &arr,int target)
{
    vector<int> index;
    for(size_t i=0;i<arr.size();i++)
    {
        int found = 0;
        for(size_t j=0;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==target && i!=j)
            {
                index.emplace_back(i);
                index.emplace_back(j);
                found = 1;
            }
        }
        if (found) break;
    }
    return index;
}

int main()
{
    int target;
    cin>>target;
    int n;
    cin>>n;
    vector<int> input;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        input.push_back(num);
    }
    vector<int> result = sum(input,target);
    for(auto it=result.begin();it!=result.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}