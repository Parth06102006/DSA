#include <bits/stdc++.h>
using namespace std;

void printS(int ind,vector<int> ds,int s,int sum,vector<int> arr,int n)
{
    // Base Case
    if (ind == n)
    {
        if(s == sum)
        {
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    
    // PickUp of the element
    ds.push_back(arr[ind]);
    s += arr[ind];
    printS(ind+1,ds,s,sum,arr,n);
    
    // Not Pick the element
    ds.pop_back();
    s -= arr[ind];
    printS(ind+1,ds,s,sum,arr,n);
}

int main()
{
    vector<int> arr = {1,2,1};
    int sum = 2;
    int n = 3;
    vector<int> ds;
    printS(0,ds,0,sum,arr,n);
}