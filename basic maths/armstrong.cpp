#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    // Write your code here
    int originalNumber = num;
    int sum = 0;
    int digits = (int)(log10(num)+1);
    while(num>0){
        int lastDigit = num%10;
        sum += (pow(lastDigit,digits));
        num/=10;
    }
    if(originalNumber==sum)
    {
        return true;
    }
    return false;
}