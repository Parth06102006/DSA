#include <iostream>

void printPattern(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int k=a-i;k>0;k--)
        {
            std::cout<<"*";
        }
        for(int j=0;j<2*i;j++)
        {
            std::cout<<" ";
        }
        for(int k=a-i;k>0;k--)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    for(int i=0;i<a;i++)
    {
        for(int k=0;k<=i;k++)
        {
            std::cout<<"*";
        }
        for(int j=0;j<2*(a-i-1);j++)
        {
            std::cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int a;
    std::cout<<"Enter the value of a : ";
    std::cin>>a;
    printPattern(a);
    return 0;
}