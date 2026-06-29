class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int total = 0;
        for(int i=0;i<patterns.size();i++){
            string target = patterns[i];

            if(word.find(target) == string::npos)continue;
            else total++;
        }

        return total;
    }
};