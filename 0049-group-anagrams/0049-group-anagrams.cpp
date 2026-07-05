class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> mpp;

        for(auto &s: strs){
            string sortedS = s;
            sort(sortedS.begin(),sortedS.end());
            mpp[sortedS].push_back(s);
        }

        vector<vector<string>> res;
        for(auto it : mpp){
            res.push_back(it.second);
        }

        return res;
    }
};