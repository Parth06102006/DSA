class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        vector<pair<int,int>> nums_second;

        for(auto it:mpp){
            nums_second.push_back({it.second,it.first});
        }

        sort(nums_second.begin(),nums_second.end(),greater<>());

        vector<int> ans;

        for(int i=0;i<k;i++){
            ans.push_back(nums_second[i].second);
        }

        return ans;
    }
};