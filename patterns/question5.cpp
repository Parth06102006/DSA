#include <iostream>

void printPattern(int num)
{
    for(int i=0;i<num;i++)
    {
        for(int j=num-i;j>0;j--)
        {
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int a;
    std::cout<<"Enter the values of a : ";
    std::cin >> a;
    printPattern(a);
    return 0;
}