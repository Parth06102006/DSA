#include <iostream>

void printPattern(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
    for(int i=0;i<a;i++)
    {
        for(int j=a-i-1;j>0;j--)
        {
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}

void alternativeApproach(int a)
{
    for(int i=1;i<=2*a-1;i++)
    {
        int stars = i;
        if(i > a) stars = 2*a-i;
        for(int j=1;j<=stars;j++)
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
    alternativeApproach(a);
    return 0;
}