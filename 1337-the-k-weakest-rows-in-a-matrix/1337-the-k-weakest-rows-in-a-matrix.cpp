template <typename T>
using MaxHeap = priority_queue<T> ;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        MaxHeap<pair<int,int>> maxHeap;

        for(int i=0;i<mat.size();i++){
            int sum = accumulate(mat[i].begin(),mat[i].end(),0);

            maxHeap.push({sum,i});

            if(maxHeap.size() > k) maxHeap.pop();
        }
        
        vector<int> finalAns;

        while(!maxHeap.empty()){
            finalAns.insert(finalAns.begin(),maxHeap.top().second);
            maxHeap.pop();
        }

        return finalAns;
    }
};