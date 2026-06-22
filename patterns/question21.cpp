#include <iostream>

void printPattern(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if((i==0||i==(a-1))||(j==0||j==(a-1)))
            {
                std::cout<<"*";
            }
            else
            {
                std::cout<<" ";
            }
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int a ;
    std::cout<<"Enter the value of a : ";
    std::cin>>a;
    printPattern(a);
    return 0;
}
