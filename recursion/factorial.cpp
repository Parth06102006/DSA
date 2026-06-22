//print the factorial of N
//The time complexity here is O(N) and the space complexity is O(N)

#include<bits/stdc++.h>
using namespace std;

int factorial(int f)
{
    if(f==1) return 1;
    return f*factorial(f-1);
}

void factoial_parametised(int i,int fact)
{
    if(i<1) 
    {
        cout<<"Factorial : "<<fact<<endl;
        return;
    }
    factoial_parametised(i-1,fact*i);
}

int main()
{
    int n;
    std::cin>>n;
    int fact = factorial(n);
    cout<<"Factorial  "<<fact<<endl;
    factoial_parametised(n,1);
}