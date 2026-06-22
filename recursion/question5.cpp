//print numbers from N to 1 and we dont have to use decrement operator
//Hence we have done here backtrcking where the print statement will be executed at thewe end if the base condition becomes true
#include<bits/stdc++.h>

void print_numbers(int i,int n)
{
    if(i>n) return;
    print_numbers(i+1,n);
    std::cout<<i<<std::endl;//this will only be executed if the above function call is returned
}

int main()
{
    int n;
    std::cin>>n;
    print_numbers(1,n);
}