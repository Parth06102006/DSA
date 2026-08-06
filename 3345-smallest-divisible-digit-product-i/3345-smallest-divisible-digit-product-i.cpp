class Solution {
public:
    int smallestNumber(int n, int t) {
        // let see first the product of digits is till 100 
        // so after that i can use loop i gues as for brute approach 
        // after the product I can do the % and then I can just add the result in the in given n first
        // let take example of n = 28 and t = 7
        // so 2*8 = 16 
        // but the number needs to be greater right so lets see 16 % 7 = 2 
        // then i add it to n which becomes what 30 so it is right yeah 0 is divisble by 7 so yeah correct 
        // lets take another example n = 84 and t = 5
        // so product of 84 is 32 and then i do the 84%5 which is 2 I add it to 84 I get 86 which becomes what 48 and it is not divisble so it produced incorrect result so it is not correct or I should like then loop till the number n to the difference and then check product of each one and then i can check the output

        // so 5 % 3 = 2 and then I add it to n to get the 17 and then I loop uptil the 17 and then whicheve returs true first is the winner 


        // I guess if it is 1 then I have to add this constraint here also would save the operation

        // it has come wrong two times now 2%5 == 2 so now it is like the case where when n < t then it is wrong okay

        // So I guess n < t then I should return the t only since that is the smallest number only lets take an example
        // n = 40 , t = 50 so smallest is what n is divisible but okay t is from 1 to 10 then yeah it is not appliable then only if n < t then i can return t

        // another wrong case here 4%3 == 1 right so 4>3 yes then I guess I should check till the number uptill 100 only then
        if(n<t) return t;

        int prd = getProduct(n);

        if(prd % t == 0) return n;

        int result = -1;

        for(int i=n+1;i<=100;i++){
            int prd = getProduct(i);
            if(prd % t == 0){
                result = i;
                break;
            }
        }

        return result;


    }

    int getProduct(int n){
        int n_cpy = n;
        int product = 1;

        while(n_cpy != 0){
            product *= n_cpy%10;
            if(product == 0) break;
            n_cpy /= 10;
        }

        return product;
    }
};