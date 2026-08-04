class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        //find low
        //find high
        // range check number present or not but then wont it be high , can i use map then
        // if not insert it 

        // enter all the element in the array ir vectir from low to high then check from the
        // nums then if it has the element or not


        int n = nums.size();

        int min_num = INT_MAX;
        int max_num = INT_MIN;

        // min and max
        for(int i=0;i<n;i++){
            min_num = min(nums[i],min_num);
            max_num = max(nums[i],max_num);
        }

        vector<int> ans;

        for(int i=min_num;i<=max_num;i++){

            bool isPresent = true;
            
            for(int j=0;j<n;j++){
                if(i == nums[j]) {isPresent=false;break;}
            }

            if(isPresent) ans.push_back(i);
        }

        return ans;
        

    }
};