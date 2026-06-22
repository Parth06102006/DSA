#include <bits/stdc++.h> 
int findGcd(int x, int y)
{
    // Write your code here
    int gcd = 1;
    for (int i=min(x,y);i>1;i--)
    {
        if(x%i==0 && y%i == 0)
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}
