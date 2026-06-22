#include <bits/stdc++.h> 
int findGcd(int x, int y)
{
    // Write your code here
    if(x==0)
    {
        return y;
    }
    else
    {
        if(x>y)
        {
            findGcd(x%y,y);
        }
        else
        {
            findGcd(y%x,x);
        }
    }
}