#include <bits/stdc++.h>

//  Practical 3

void swap_two_numbers_without_pointers(int a , int b)
{
    std::cout << "Before Swaping Value of A and B "<<a<<" "<<b<<std::endl;
    int temp = b;
    b = a;
    a = temp;
    std::cout << "After Swaping Value of A and B "<<a<<" "<<b<<std::endl;

}

void swap_two_numbers_with_pointers(int &c, int &d)
{
    int temp = c;
    c = d;
    d = temp;
}

int main()
{
    int a=10;
    int b=30;
    int c=60;
    int d=80;
    swap_two_numbers_without_pointers(a,b);
    std::cout << "Before Swaping Value of C and D "<<c<<" "<<d<<std::endl;
    swap_two_numbers_with_pointers(c,d);
    std::cout << "After Swaping Value of C and D "<<c<<" "<<d<<std::endl;
}

//Practical 4
//WAP to define the function temmplate for calculating the square of different numbers with different int data types the date would be of 22 August
// int double float



/* int main()
{
    int i=10;
    char c = 'a';
    i = i+c;
    float f = 0 + 1.0;
    std::cout<<"i= "<<i<<std::endl
    << "c = "<<c<<std::endl
    <<"f = "<<f<<std::endl;
} */