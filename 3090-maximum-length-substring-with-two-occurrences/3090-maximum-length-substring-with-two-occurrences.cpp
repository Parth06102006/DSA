class Solution {
public:
    int maximumLengthSubstring(string s) {
        int sizeString = s.size();

        int mpp[26] = {0};

        int left = 0;
        int right = 0;

        int maxLen = INT_MIN;

        while(right < sizeString){
            mpp[s[right]-'a']++;
            
            while(mpp[s[right]-'a'] > 2){
                mpp[s[left]-'a']--;
                left++;
            }

            maxLen = max(maxLen,(right-left+1));

            right++;
        }


        return maxLen;
    }
};