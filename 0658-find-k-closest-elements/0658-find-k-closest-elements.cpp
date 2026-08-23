class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;

        for(int i=0;i<arr.size();i++){
            int dist = abs(arr[i]-x);
            pq.push({dist,arr[i]});

            if(pq.size() > k) pq.pop();
        }

        vector<int> final_ans;

        while(!pq.empty()){
            final_ans.push_back(pq.top().second);
            pq.pop();
        }

        sort(final_ans.begin(),final_ans.end());

        return final_ans;
    }
};