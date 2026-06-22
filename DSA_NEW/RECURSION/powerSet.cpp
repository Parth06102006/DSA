#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > powerSet(const vector<int>& nums) {
    vector<vector<int>> result;
    for(int i = 0;i<pow(2,nums.size());i++)
    {
        vector<int> res = {};
        for(int j=0;j<nums.size();j++)
        {
            if(i & (1<<j))
            {
                res.push_back(nums[j]);
            }
        }
        result.push_back(res);
    }
    for(int i=0;i<result.size();i++)
    {
        for(int j = 0;j<result[i].size();j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return result;
}

int main(){
    powerSet({1,2,3});
}