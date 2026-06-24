class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        // BRUTE FORCE SOLUTION 
        vector<int> ans;
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

        return ans; 

    }

};