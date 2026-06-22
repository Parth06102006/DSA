#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin>>n;
    int count = 0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
            if((n/i)!=i)
            {
                count++;
            }
        }
    }
    if(count==2){
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}