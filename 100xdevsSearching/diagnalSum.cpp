#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void diagnalSum(vector<vector<int>> nums)
        {
            int sum = 0;
            for(int i=0;i<nums.size();i++)
            {
                for(int j=0;j<nums.size();j++)
                {
                    if(i==j) sum+=nums[i][j];
                }
            }
            cout<<sum<<endl;
        }
};

int main()
{
    Solution s1;
    int numberOfRows;
    cin>>numberOfRows;

    vector<vector<int>> entries;
    for(int i=0;i<numberOfRows;i++)
    {
        vector<int> nums;
        for(int j=0;j<numberOfRows;j++)
        {
            int num;
            cin>>num;
            nums.push_back(num);
        }
        entries.push_back(nums);
    }   
    s1.diagnalSum(entries);
}