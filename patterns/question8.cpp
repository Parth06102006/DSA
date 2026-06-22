#include <iostream>

void printPattern(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i-1;j++)
        {
            std::cout<<" ";
        }
        for(int k=i;k<2*a-i-1;k++)
        {
            std::cout<<"*";
        }
        for(int j=0;j<=i-1;j++)
        {
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int a;
    std::cout<<"Enter the value of a :";
    std::cin>>a;
    printPattern(a);
    return 0;
}