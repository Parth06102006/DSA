//print name N times using recursion
//here the time complexity is O(N) and the space complexity is O(N) as the stack is awaiting for the call to be executed is N functions only
//Since here the function call is O(1) hence it is called N times so there is time complexity of O(N)
#include<bits/stdc++.h>

void print_Name(int i,int n)
{
    if(i>n)
    {
        return;
    }
    std::cout<<"Parth Garg"<<std::endl;
    print_Name(++i,n);
}

int main()
{
    int n;
    std::cin>>n;
    print_Name(1,n);
}