#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int reverseNumber = 0;
        while(x!=0)
        {
            cout<<"Value of Number"<<x<<endl;
            int lastDigit = x%10;
            if((reverseNumber>INT32_MAX/10) || (reverseNumber == INT32_MAX/10 && lastDigit > 7)) return 0;
            if((reverseNumber<INT32_MIN/10) || (reverseNumber == INT32_MIN/10 && lastDigit < -8)) return 0;
            reverseNumber = (reverseNumber*10)+lastDigit;
            x/=10;
        }
        return reverseNumber;
    }
};

// the above code is for reversing the 32 bits number signed integer if ti falls undert the if condition else it will rerturn 0