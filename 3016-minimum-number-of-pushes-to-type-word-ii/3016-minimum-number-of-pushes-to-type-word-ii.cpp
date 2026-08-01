class Solution {
public:
    int minimumPushes(string word) {
        
        vector<int> freq(26,0);

        for(int i=0;i<word.size();i++){
            freq[word[i]-'a'] +=1;
        }

        sort(freq.begin(),freq.end(), std::greater<int>()); 

        int sum = 0;

        for(int i=0;i<freq.size();i++){
            if(freq[i] > 0){
                sum += freq[i] * (i/8 + 1);
            }
        }

        return sum;

    }
};