#include <iostream>

void printPattern(int a)
{
    for(int i =1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout<<i<<" ";
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