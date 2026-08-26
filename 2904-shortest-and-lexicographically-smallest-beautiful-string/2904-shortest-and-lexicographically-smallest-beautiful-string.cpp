class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0;
        int right = 0;
        string ans = "";

        int size_of_s = s.size();
        int count_of_one = 0;

        while(right < size_of_s and s[right] == '0') right++;

        left=right;

        while(right < size_of_s){

            if(s[right] == '1'){
                count_of_one++;
            }

            while(left<size_of_s and count_of_one > k){
                if(s[left] == '1') count_of_one--;
                left++;
            }

            while(left<size_of_s and s[left] == '0') left++;

            if(count_of_one == k) {
                string curr = s.substr(left,right-left+1);

                if(ans == "" or ans.size() > curr.size() or (ans.size() == curr.size() and curr < ans)) ans = s.substr(left,right-left+1);
            }

            right++;
        }
            return ans;
        }
};