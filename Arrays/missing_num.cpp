#include <bits/stdc++.h>

int linear_search(std::vector<int> arr,int n)
{
    for(int j=1;j<arr.size();j++)
    {
        int flag = 0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] == n)
            {
                flag = 1;
                break;
            }
        }
        if(!flag) return j;
    }
    return -1;
}
// here in this case the time complexity is N^2  so this is not the optimized approach

int hashing_search(std::vector<int> arr,int n)
{
    std::vector<int> hashed(arr.size() + 1, 0);
    for(int i=0;i<arr.size();i++)
    {
        hashed[arr[i]] = 1;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(hashed[i] != 1)
        {
            return i;
        }
    }
}   
// here the time complexity is 2N but it does not have the good space complexity

// here is one technique using Sum which is the below technique
int sum(std::vector<int> arr)
{
    int sum = (arr.size()*(arr.size()+1))/2;
    int sum2 = 0;
    for(int i=0;i<arr.size();i++)
    {
        sum2+=arr[i];
    }
    return sum-sum2;
}

//there is another technique xor where if i xor same numbers then its xor is 0 if the two numbers are different then it is the number basically here in this video we have been taught that if the numbers are same then cut it
//2^2^5^5
//0^0
//0
int xor_search(std::vector<int> arr)
{
    int xor1 = 0;
    int xor2 = 0;
    for(int i=0;i<arr.size();i++)
    {
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
    }
    xor1 = xor1^arr.size();
    return xor1^xor2;
}
// this is also a O(N)

//when we are using sum there might be overflow in case of larger number then it might exceed hence avoid using sum and xor is better 

int main()
{

}