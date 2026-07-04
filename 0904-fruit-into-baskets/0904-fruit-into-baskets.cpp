class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        if(fruits.size() == 1) return 1;
        int left = 0;
        int right = 0;
        int n = fruits.size();
        int maxLen = INT_MIN;
        vector<int> uniqueElement(2,-1);

        while(right < n){
            int value = fruits[right];
            
            if(uniqueElement[0] == -1 || uniqueElement[1] == -1){
                if(uniqueElement[0] == -1){
                    uniqueElement[0] = value;
                }else{
                    uniqueElement[1] = value;
                }
            }else{
                if(value != uniqueElement[0] && value != uniqueElement[1]){
                    
                    int index_0 = INT_MAX;
                    int index_1 = INT_MAX;
                    int val_0 = uniqueElement[0];
                    int val_1 = uniqueElement[1];

                    while(left < right){
                        if(fruits[left] == val_0){
                            index_0 = min(left,index_0);
                            index_1 = INT_MAX;
                        }else if(fruits[left] == val_1){
                            index_1 = min(left,index_1);
                            index_0 = INT_MAX;
                        }
                        left++;
                    }

                    if (index_0 != INT_MAX){
                        uniqueElement[0] = val_0;
                        uniqueElement[1] = value;
                        left = index_0;
                    }else{
                        uniqueElement[0] = val_1;
                        uniqueElement[1] = value;
                        left = index_1;
                    }

                }
            }

            if(uniqueElement[0] != -1 && uniqueElement[1] != -1){
                maxLen = max(maxLen,right-left+1);
            }
            right++;
        }

        return maxLen;

    }
};