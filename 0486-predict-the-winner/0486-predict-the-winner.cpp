class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        return helper(nums,1,0,0);
    }

    bool helper(vector<int> &nums,int chance,int score_1,int score_2){
        if(nums.empty()){

            bool result = false;

            if(score_1 >= score_2) result = true;
            else result=false;

            return result; // need to change here
        }

        bool result = false;

        if (chance == 1){ // if chance is of player 1
            
            // First Index Element
            int elem = nums[0];
            nums.erase(nums.begin());

            bool r1 = helper(nums,2,score_1+elem,score_2);

            nums.insert(nums.begin(),elem);

            // Last Index Element
            elem = nums[nums.size()-1];
            nums.pop_back();

            bool r2 = helper(nums,2,score_1+elem,score_2);

            nums.push_back(elem);

            result = r1 || r2;

        }else{ // if chance is of player 2

            // First Index Element
            int elem = nums[0];
            nums.erase(nums.begin());

            bool r1 = helper(nums,1,score_1,score_2+elem);

            nums.insert(nums.begin(),elem);

            // Last Index Element
            elem = nums[nums.size()-1];
            nums.pop_back();

            bool r2 = helper(nums,1,score_1,score_2+elem);
            nums.push_back(elem);

            result = r1 && r2;

        }

        return result;

    }


};