#include<bits/stdc++.h>
//The time complexity here is not exactly but near to 2^n as every function call makes 2 function calls though not exactly but near to 2^n
using namespace std;

int get_fibbonaci(int n)
{
    if(n<=1) return n;
    return get_fibbonaci(n-1) + get_fibbonaci(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<n<<"th Element : "<<get_fibbonaci(n)<<endl;
}
