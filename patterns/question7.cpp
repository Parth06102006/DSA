#include <iostream>

void printPattern(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=a-i-1;j>0;j--)
        {
            std::cout<<' ';
        }
        for(int k=0;k<2*i+1;k++)
        {
            std::cout<<'*';
        }
        for(int j=a-i-1;j>0;j--)
        {
            std::cout<<' ';
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