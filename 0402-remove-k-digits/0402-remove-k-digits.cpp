class Solution {
public:
    string removeKdigits(string num, int k) {

        // IF THE ELEMENT HAS SAME NUMBER OF ELEMENTS AS THE VALUE OF K
        if(num.length() == k) return "0";

        int n = num.length();
        stack<char> st;

        string ans = "";

        for(int i=0;i<n;i++){
            int value_to_push = num[i] - '0';
            int value_on_top =  st.empty() ? -1 : st.top() - '0';


            while(!st.empty() && (k!=0 && (value_on_top > value_to_push))){
                st.pop();
                value_on_top = st.empty() ? -1 : st.top() - '0';
                k--;
            }

            if(st.empty() && value_to_push == 0)continue;
            else st.push(num[i]);
        }

        while(k > 0 && !st.empty()){st.pop();k--;}

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        if(ans == "") return "0";

        reverse(ans.begin(),ans.end());
        

        return ans;
    }
};