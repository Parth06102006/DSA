#include <iostream>

void printPattern(int num)
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            std::cout<<j<<" ";
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