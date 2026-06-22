/*         unordered_set<int>st;
        while(n>0){
            st.emplace(n%10);
            n/=10;
        }
        return st.size();
 */

 #include <bits/stdc++.h> 
int countDigit(long long x) {
    // Write your code here.
    int count = 0;
    while(x>0){
        int lastDigit = x%10;
        count+=1;
        x=x/10;
    }
    return count;
}

//we can also count rather in a single line in the manner
int countDigit2(long long x) {
    // Write your code here.
    return (int)(log10(x)+1);
}

//the time complexity here since here we are doing division in a loop hence here the time complexity would be logY where Y is the number we are dividong it like here x=x/10 here Y=10 if we would have divided it by 2 then time complxity would have been log2(X)