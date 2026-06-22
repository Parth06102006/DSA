#include <bits/stdc++.h>
using namespace std;

void subset(int ind,int sum,vector<int> &arr,vector<int> &sumSubset){
    if (ind == arr.size()){
        sumSubset.push_back(sum);
        return;
    }

    // Pick an element
    subset(ind+1,sum+arr[ind],arr,sumSubset);

    // Not Pick an element
    subset(ind+1,sum,arr,sumSubset);
}

int main(){
    int m;
    cin>>m;
    for(int j = 0;j<m;j++)
    {
        vector<int> sumSubset;
        int n;
        cin>>n;
        vector<int> arr(n);

        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            arr[i] = num;
        }

        subset(0,0,arr,sumSubset);

        sort(sumSubset.begin(),sumSubset.end());

        for(int i=0;i<sumSubset.size();i++)
        {
            cout<<sumSubset[i]<<" ";
        }
        cout<<endl;
    }
}