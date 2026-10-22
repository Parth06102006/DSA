bool comparator(vector<int> &v1,vector<int> &v2){
    return v1[1]<v2[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comparator);

        int cnt = 0;
        int freeOverlap = intervals[0][1];

        for(int i=1;i<intervals.size();i++){
            auto start = intervals[i][0];
            auto end = intervals[i][1];

            if(start < freeOverlap){
                cnt++;
            }else{
                freeOverlap = end;
            }
        }

        return cnt;
    }
};