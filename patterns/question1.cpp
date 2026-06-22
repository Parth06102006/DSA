/*
for the outer loops count the number of rows 
for the inner lopp count the number of columns
andconnect them to the rows
print them '*' inside the inner for loop
observe symmetry (optional)
*/

#include <iostream>

void pattern(int x)
{
    int num = x;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            std::cout<<"* ";
        }
        std::cout<<"\n";
    }
}

int main()
{
    int x;
    std::cout<<"Enter the value of the x:";
    std::cin>>x;
    pattern(x);
    return 0;
}