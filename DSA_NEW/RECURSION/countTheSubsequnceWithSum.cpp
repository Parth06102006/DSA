#include <bits/stdc++.h>
using namespace std;

int printS(int ind,vector<int> ds,int s,int sum,vector<int> arr,int n){
    if(ind == n){
        if(s==sum){
            return 1;
        }
        return 0;
    }

    ds.push_back(arr[ind]);
    s+=arr[ind];
    int l = printS(ind+1,ds,s,sum,arr,n);

    ds.pop_back();
    s-=arr[ind];
    int r = printS(ind+1,ds,s,sum,arr,n);

    return l+r;
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
        int n = printS(0,ds,0,sum,arr,z);
        cout << n << endl;
    }
}