#include <iostream>

void printPattern(int a)
{
    for(int i=0;i<a;i++)
    {
        for(char j = 'E'-i;j<='E';j++)
        {
            std::cout<<j<<" ";
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