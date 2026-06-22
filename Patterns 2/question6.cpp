#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j<<' ';
        }
        cout<<endl;
    }
}

int main()
{
    int input ;
    cin>>input;
    print_pattern(input);
    return 0;
}