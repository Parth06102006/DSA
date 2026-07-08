class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> hash;

        for(auto &ch: t){
            hash[ch]++;
        }

        int left = 0,right = 0;
        int minLen = INT_MAX;
        int cnt = 0;
        int sIndex = -1;

        while(right < s.size()){
            if(hash[s[right]] > 0 ) cnt+=1;
            hash[s[right]]--;

            while(cnt == t.size()){
                if (minLen > (right-left+1)){
                    minLen = min(minLen,(right-left+1));
                    sIndex = left;
                }

                if(left<s.size()){
                    hash[s[left]]++;
                    if(hash[s[left]] > 0) cnt--;
                    left++;
                }

            }

            right++;
        }

        return sIndex == -1 ? "" : s.substr(sIndex,minLen);
    }

};