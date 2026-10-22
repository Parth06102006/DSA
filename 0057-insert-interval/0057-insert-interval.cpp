class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        if(intervals.size() == 0){
            return {newInterval};
        }
        vector<vector<int>> ans;

        int start_new = newInterval[0];
        int end_new = newInterval[1];

        int start_point = start_new;
        int end_point = end_new;

        int i = 0;
        int n = intervals.size();

        while(i<n and intervals[i][1] < start_new){
            ans.push_back(intervals[i]);
            i++;
        }

        while(i<n and intervals[i][0] <= end_new){
            start_point = min(intervals[i][0],start_point);
            end_point = max(intervals[i][1],end_point);
            i++;
        }

        ans.push_back({start_point,end_point});

        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;

    }
};