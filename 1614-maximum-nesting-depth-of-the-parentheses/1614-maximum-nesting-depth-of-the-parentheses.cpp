class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maxDepth = INT_MIN;

        for(auto &ch : s){
            if(ch == '(') {
                depth++;
            }else if(ch == ')'){
                maxDepth = max(depth,maxDepth);
                depth--;
            }
        }

        return maxDepth == INT_MIN ? 0 : maxDepth;
    }
};