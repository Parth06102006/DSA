#include <bits/stdc++.h>
using namespace std;

void findCombination(int ind,int target,vector<int> &ds,vector<int> &arr,vector<vector<int>> &ans){
    if (ind == arr.size()){
        if(target == 0){
            bool checkPls = true;
            for(int i = 0;i<ans.size();i++){
                for(int j=0;j<ans[i].size();j++){
                    for(int k=0;k<ds.size();k++){
                        if (ds[k] == ans[i][j]){
                            checkPls = true;
                            break;
                        }else{
                            checkPls = false;
                        }
                    }
                }
            }
            if (checkPls) ans.push_back(ds);
            return;
        }
        
        if (target >= arr[ind]){
            ds.push_back(arr[ind]);
            findCombination(ind+1,target-arr[ind],ds,arr,ans);
            ds.pop_back();
        }

        findCombination(ind+1,target,ds,arr,ans);
        return;

    }
}

int main(){}