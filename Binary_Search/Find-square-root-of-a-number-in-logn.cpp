#include <bits/stdc++.h>
using namespace std;

int sqrt(int n)
{
    int i = 1;
    while(i*i<=n)
    {
        if(i*i==n) return i;
        else if(i*i>n) return (i-1);
        else i++;
    }
}


int sqrt_optimal(int n)
{
    int left = 0;
    int right = n;
    int ans = 1;
    while(left<=right)
    {
        long long mid = left + (right-left)/2;
        if((long long)mid*mid == n) return mid;
        else if(mid*mid>n)
        {
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }
    }
    return right;
}

int main()
{

}