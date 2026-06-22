#include <iostream>

void printPattern(int a)
{
    char letter = 'A';
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout<<letter;
        }
        std::cout<<std::endl;
        letter ++;
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