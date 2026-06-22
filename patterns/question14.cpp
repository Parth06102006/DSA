#include <iostream>

void printPattern(int a)
{
    for(int i=0;i<a;i++)
    {
        char letter = 'A';
        for(int j=0;j<=i;j++)
        {
            std::cout<<letter++;
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