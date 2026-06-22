//print linearly from 1 to N
#include<bits/stdc++.h>

void print_number(int i,int n)
{
    if(i>n) return;
    std::cout<<i<<std::endl;
    print_number(++i,n);
}

int main()
{
    int n;
    std::cin>>n;
    print_number(1,n);
}