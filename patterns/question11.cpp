#include <iostream>

void printPattern(int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            (i+j)%2 == 0 ? std::cout<<1<<" ": std::cout<<0<<" ";
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