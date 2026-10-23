template <typename T>
using MinHeap = priority_queue<T,vector<T>,greater<T>>;

class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        MinHeap<int> pq;

        sort(intervals.begin(),intervals.end());

        for(auto &it : intervals){
            if(!pq.empty() and pq.top() < it[0]){
                pq.pop();
            }
            pq.push(it[1]);
        }

        return pq.size();
    }
};