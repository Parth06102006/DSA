class Solution {
public:
    int findGCD(vector<int>& nums) {
        int largest = INT_MIN;
        int smallest = INT_MAX; 

        for(int i=0;i<nums.size();i++){
            if (largest < nums[i]) largest = nums[i];
            if (smallest > nums[i]) smallest = nums[i];
        }

        if (largest % smallest == 0) return smallest;

        int ans = findGCD(largest,smallest);

        return ans;
    }

    int findGCD(int a,int b){
        if(b==0) return a;

        return findGCD(b,a%b);
    }
};