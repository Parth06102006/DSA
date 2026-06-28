class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n = asteroids.size();

        for(int i=0;i<n;i++){
            
            int needToPush = 1;

            while (!st.empty() && (st.top()>0 && asteroids[i]<0) ){
                int value_to_push = abs(asteroids[i]);
                int value_of_top = st.top();

                if(value_to_push < value_of_top) {needToPush=0;break;}
                else if(value_to_push == value_of_top) {st.pop();needToPush=0;break;}
                else{
                    st.pop();
                }
            }

            if(needToPush) st.push(asteroids[i]);
        }

        int st_n = st.size();
        vector<int> ans(st_n);

        int i = st_n-1;
        while(!st.empty()){
            ans[i--] = st.top();
            cout<<st.top()<<endl;
            st.pop();
        }

        return ans;

    }
};