class Solution {


public:
    bool stoneGameIX(vector<int>& stones) {
        
        // I need to look this right now I watched the video and understand the solutuon how it is being done

        int count[3] = {0};

        for(int i=0;i<stones.size();i++){
            count[stones[i]%3]++;
        }

        if(count[0] % 2 == 0) return (count[1]>= 1 and count[2] >=1);
        return abs(count[1]-count[2]) > 2;
        
    }
};