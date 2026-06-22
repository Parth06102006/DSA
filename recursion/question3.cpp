//print the numbers from N->1
#include<bits/stdc++.h>

void print_reverse_numbers(int i,int n)
{
    if(i<1) return;
    std::cout<<i<<std::endl;
    print_reverse_numbers(--i,n);
}

int main()
{
    int n;
    std::cin>>n;
    print_reverse_numbers(n,n);
}