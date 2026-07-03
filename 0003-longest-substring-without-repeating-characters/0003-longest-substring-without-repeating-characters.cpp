class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxFreq = 1;
        int n = s.size();

        if (n == 0) return 0;

        for(int right=1;right<n;right++){
            char character = s[right];

            int cpy = left;
            int isPresent = 0;
            while(cpy<right){
                if(s[cpy] == character){
                    isPresent = 1;
                    break;
                }
                cpy++;
            }

            if(cpy == right){
                maxFreq = max(maxFreq,right-left+1);
            }else{
                maxFreq = max(maxFreq,right-left);
            }


            if (isPresent){
                left = cpy+1;
            }
        }

        return maxFreq;
    }
};