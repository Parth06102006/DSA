#include <bits/stdc++.h>
using namespace std;

// contains duplicate arrays as well hence this solution is not right if we are to provide unqiue results
// vector<vector<int>> sumThree(vector<int>& nums)
// {
//     vector<vector<int>> result;
//     for(int i=0;i<nums.size();i++)
//     {
//         unordered_map<int,int> mpp;
//         for(int j=i+1;j<nums.size();j++)
//         {
//             int b = -(nums[j]+nums[i]);
//             if(mpp.find(b) != mpp.end())
//             {
//                 result.push_back({nums[i],nums[j],b});
//             }
//             mpp[nums[j]]++;
//         }
//     }

//     for(int i=0;i<result.size();i++)
//     {
//         for(int j=0;j<result[0].size();j++)
//         {
//             cout<<result[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return result;
// }

// if we want to provide the result that not contain duplicate elements then

vector<vector<int>> sumThreeBest(vector<int> nums)
{
    sort(nums.begin(),nums.end());
    int size = nums.size();
    vector<vector<int>> result;
    for(int i=0;i<size;i++)
    {
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j = i+1;
        int k=size-1;
        while(j<k)
        {
            int temp = nums[i]+nums[j]+nums[k];
            if(temp == 0)
            {
                result.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while(j<k && nums[j] == nums[j-1])j++;
                while(j<k && nums[k] == nums[k-1])k--;
            }
            else if(temp<0) j++;
            else if(temp>0) k--;
        }
    }

    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<vector<int>> result = sumThreeBest(nums);
    
    for(auto& triplet : result) {
        for(int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}