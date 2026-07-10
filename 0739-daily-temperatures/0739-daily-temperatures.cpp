class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> nums(temperatures.size(),0);
        nextGreaterElement(temperatures,nums);
        return nums;
    }

    void nextGreaterElement(vector<int> &temperatures,vector<int> &nums){

        stack<pair<int,int>> st;
        int n = temperatures.size();

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top().first <= temperatures[i]){
                st.pop();
            }

            if (!st.empty()) nums[i] = st.top().second - i;

            st.push({temperatures[i],i});
        }
    }
};