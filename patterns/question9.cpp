#include <iostream>

void printPattern(int a)
{   
    // int a,b;
    // if(x%2 == 0)
    // {
    //     a = x/2;
    //     b = x/2;
    // }
    // else
    // {
    //     a = (x/2);
    //     b = (x/2)+1;
    // }


    for(int i=0;i<a;i++)
    {
        for(int j=a-i-1;j>0;j--)
        {
            std::cout<<" ";
        }
        for(int k=0;k<2*i+1;k++)
        {
            std::cout<<'*';
        }
        for(int j=a-i-1;j>0;j--)
        {
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<i;j++)
        {
            std::cout<<" ";
        }
        for(int k=i;k<2*a-i-1;k++)
        {
            std::cout<<'*';
        }
        for(int j=0;j<i;j++)
        {
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int a;
    std::cout<<"Enter the value of the a : ";
    std::cin>>a;
    printPattern(a);
    return 0;
}