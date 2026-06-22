//There are two ways to to print the sum of N numbers
//first is the parametsied wayt where in the papramets i return the numbers by decrememt operators until the  0 commes where i would print the result and then return it
//second is the functional way where in the return staement i would give the functional call then what would happen is that here the function would be called then the function will be awaited  until the base condition is reached
#include<bits/stdc++.h>

int sum(int n)
{
    if(n==0) return 0;
    return n + sum(n-1);
}

void sum_another_way(int i,int sum)
{
    if(i<1)
    {
        std::cout<<"Sum : "<<sum<<std::endl;
        return;
    }
    sum_another_way(i-1,sum+i);
}

int main()
{
    int n;
    std::cin>>n;
    int sum_ = sum(n);
    std::cout<<"Sum : "<<sum_<<std::endl;
    sum_another_way(n,0);
}