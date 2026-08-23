class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,vector<int>>> pq;

        int n = points.size();

        for(int i=0;i<n;i++){
            int x = points[i][0];
            int y = points[i][1];
            
            // No need to calculate the square root
            double dist_from_origin = pow(x*x + y*y,0.5);

            pq.push({dist_from_origin,{x,y}});

            if(pq.size() > k) pq.pop();
        }

        vector<vector<int>> final_ans;

        while(!pq.empty()){
            final_ans.push_back(pq.top().second);
            pq.pop();
        }

        return final_ans;
    }
};