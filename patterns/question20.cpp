#include <iostream>

int main()
{   
    int a = 20;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout<<"*";
        }
        for(int k=(2*(a-i-1));k>0;k--)
        {
            std::cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    for(int i=0;i<a-1;i++)
    {
        for(int j=a-i-1;j>0;j--)
        {
            std::cout<<"*";
        }
        for(int k=0;k<2*(i+1);k++)
        {
            std::cout<<" ";
        }
        for(int j=a-i-1;j>0;j--)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}