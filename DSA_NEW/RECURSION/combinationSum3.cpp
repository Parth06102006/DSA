#include <bits/stdc++.h>
using namespace std;

void combinationSum(int i,vector<int> &temp_arr,vector<vector<int>> &ans,int sum,int size){
        if (sum<0) return;
        else if (temp_arr.size() == size && sum!=0){
            return;
        }
        else if (temp_arr.size() == size && sum == 0){
            ans.push_back(temp_arr);
            return;
        }

        // Pick an element
        for(;i<=9;i++){
            temp_arr.push_back(i);
            combinationSum(i+1,temp_arr,ans,sum - i,size);
            temp_arr.pop_back();
        }
    
    }

int main(){
    int test_size;
    cin>>test_size;

    for(int i=0;i<test_size;i++)
    {
        int sum;
        int size;
        cin>>sum>>size;
        int ind = 0;
        vector<int> temp_arr;
        vector<vector<int>> ans;
        
        combinationSum(1,temp_arr,ans,sum,size);

        for(int j=0;j<ans.size();j++){
            for(int k=0;k<ans[j].size();k++){
                cout<<ans[j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}