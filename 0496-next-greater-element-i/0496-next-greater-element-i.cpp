class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        // BRUTE FORCE SOLUTION 
        /* vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i] == nums2[j]){

                    if(j == nums2.size()-1) ans.push_back(-1);
                    else{
                        int isPresent = 0;

                            for(int k = j+1;k<nums2.size();k++){
                                if((k<nums2.size()) && (nums2[k]>nums2[j])){
                                    isPresent = 1;
                                    ans.push_back(nums2[k]);
                                    break;
                                 }
                             }

                        if(isPresent == 0) ans.push_back(-1) ;
                        
                        }


                    }

                }
            }

        return ans; */ 

        // OPTIMAL APPROACH
        stack<int> st;
        vector<int> ans(nums1.size(),-1);
        unordered_map<int,int> mpp;

        for(int i=0;i<nums1.size();i++){
            mpp[nums1[i]] = i;
        }

        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top() <= nums2[i]) st.pop();

            if(mpp.find(nums2[i]) != mpp.end()){
                if(st.empty()) ans[mpp[nums2[i]]] = -1;
                else ans[mpp[nums2[i]]] = st.top();
            }


            st.push(nums2[i]);
        }

        return ans;

    }

};