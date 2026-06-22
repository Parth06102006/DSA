#include <iostream>

void printPattern(int a)
{
    int x = 1;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout<<x++<<" ";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int a;
    std::cout<<"Enter the value of a  : ";
    std::cin>>a;
    printPattern(a);
    return 0;
}