#include <iostream>
#include <math.h>

void printPattern(int a)
{
    // for(int i=0;i<a;i++)
    // {
    //     for(int j=0;j<a;j++)
    //     {
    //         if()
    //     }
    // }
    for(int i=0;i<2*a-1;i++)
    {
        for(int j=0;j<2*a-1;j++)
        {
            int top = i;
            int left = j;
            int right = (2*a-2)-j;
            int bottom = (2*a-2)-i;
            std::cout<<(a-std::min(std::min(top,bottom),std::min(left,right)));
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
