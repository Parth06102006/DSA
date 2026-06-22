//print numbers from 1 to N and we dont have to use increment operator
//Hence we have done here backtrcking where the print statement will be executed at thewe end if the base condition becomes true
#include<bits/stdc++.h>

void print_numbers(int i,int n)
{
    if(i<1) return;
    print_numbers(i-1,n);
    std::cout<<i<<std::endl;//this will only be executed if the above function call is returned
}

int main()
{
    int n;
    std::cin>>n;
    print_numbers(n,n);
}