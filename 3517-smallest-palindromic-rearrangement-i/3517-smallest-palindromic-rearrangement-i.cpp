class Solution {
public:
    string smallestPalindrome(string s) {
        if (s.size() == 1 ) return s;

        int length = s.size();

        string new_s = "";

        if(length % 2 == 0){

            string new_half = s.substr(0,length/2);
            sort(new_half.begin(),new_half.end());

            cout<<new_half;

            string new_reverse = new_half;

            reverse(new_reverse.begin(),new_reverse.end());

            new_s = new_half + new_reverse;

        }else{

            string new_half = s.substr(0,length/2);
            sort(new_half.begin(),new_half.end());
            string new_reverse = new_half;
            reverse(new_reverse.begin(),new_reverse.end());
            string middle = "";
            middle += s[length/2];
            new_s = new_half + middle + new_reverse;

        }

        return new_s;

    }
};