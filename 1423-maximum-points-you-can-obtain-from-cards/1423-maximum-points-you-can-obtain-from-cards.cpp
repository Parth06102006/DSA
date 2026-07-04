class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long total_sum = 0;
        for(int i=0;i<cardPoints.size();i++){total_sum+=cardPoints[i];}
        if(k == cardPoints.size()) {
            return total_sum;
        }

        int n = cardPoints.size();
        int l = 0;
        int r = n-k;
        long long sum = 0;
        long long maxSum = 0;
        
        for(int i=0;i<n-k;i++){
            sum += cardPoints[i];
        }

        maxSum= max(maxSum , total_sum - sum);

        while(r<n){
            sum -= cardPoints[l];
            l++;

            sum += cardPoints[r];
            r++;

            maxSum = max(maxSum,total_sum-sum);
        }

        return maxSum;
    }
};