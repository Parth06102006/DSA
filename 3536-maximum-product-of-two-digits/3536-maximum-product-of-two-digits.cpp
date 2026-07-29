class Solution {
public:
    int maxProduct(int n) {
        string num = to_string(n);
        sort(num.begin(),num.end());
        string subPart = num.substr(num.size()-2);
        return (subPart[0] - '0') * (subPart[1] - '0');
    }
};