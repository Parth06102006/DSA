#include <bits/stdc++.h>
using namespace std;

bool printS(int ind,vector<int> ds,int s,int sum,vector<int> arr,int n){
    if(ind == n){
        if(s == sum){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;
    }

    // Pick up the element
    ds.push_back(arr[ind]);
    s+= arr[ind];
    if(printS(ind+1,ds,s,sum,arr,n) == true){
        return true;
    }

    ds.pop_back();
    s-= arr[ind];
    if(printS(ind+1,ds,s,sum,arr,n)==true){
        return true;
    }

    return false;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int z ;
        cin >> z;
        vector<int>arr(z,0);
        int sum;
        cin >> sum;
        vector<int> ds;
        for(int i=0;i<z;i++)
        {
            cin>>arr[i];
        }
        printS(0,ds,0,sum,arr,z);
    }
}