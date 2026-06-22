#include <iostream>

void printPattern(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            std::cout<<j;
        }
        for(int k=2*(a-i-1);k>0;k--)
        {
            std::cout<<"_";
        }
        for(int j=i+1;j>0;j--)
        {
            std::cout<<j;
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