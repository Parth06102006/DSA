#include <iostream>

void printPattern(int a)
{ 
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout<<"* ";
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
    return 0 ;

}