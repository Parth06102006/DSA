//good

#include <iostream>

void printPattern(int a)
{
    for(int i=0;i<a;i++)
    {
        char letter = 'A';
        int mid = (2*i+1)/2;
        for(int k=a-i-1;k>0;k--)
        {
            std::cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {         
            std::cout<<letter;
            if(j<mid) letter++;
            else letter--;
        }
        for(int k=a-i-1;k>0;k--)
        {
            std::cout<<" ";
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