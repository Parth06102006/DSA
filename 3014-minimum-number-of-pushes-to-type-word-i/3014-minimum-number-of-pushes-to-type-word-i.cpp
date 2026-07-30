class Solution {
public:
    int minimumPushes(string word) {
        int wordLength = word.size();

        if ( wordLength <= 8 ) return wordLength;

        int sum = 0;
        int cnt = 1;
        
        while(wordLength > 0){
            if(wordLength > 8){
                sum += 8*cnt;
                wordLength -= 8;
            }else{
                sum += wordLength*cnt;
                break;
            }
            cnt++;
        }

        return sum;

    }
};