class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        const int price = 5;

        int number_5s = 0;
        int number_10s=0;

        for(int i=0;i<bills.size();i++){
            if(bills[i]==5)number_5s++;
            else if(bills[i]==10){
                if(number_5s<=0) return false;
                number_10s++;
                number_5s--;
            }
            else if(bills[i]==20){
                if(number_10s>0 and number_5s>0){
                    number_10s--;
                    number_5s--;
                }
                else if(number_5s >= 3){
                    number_5s-=3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }

};
