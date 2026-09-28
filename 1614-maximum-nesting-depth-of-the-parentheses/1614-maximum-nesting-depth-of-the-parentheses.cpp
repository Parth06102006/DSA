class Solution {
public:
    int maxDepth(string s) {
        int max_num = 0;
        int total = 0;

        for(auto ch : s){
            if(ch == '('){
                total++;
                max_num = max(max_num,total);
            }else if(ch == ')'){
                total--;
            }
        }

        return max_num;
    }
};