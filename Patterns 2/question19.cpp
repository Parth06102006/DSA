#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            cout << '*';
        }
        for(int j=0;j<2*i;j++)
        {
            cout << ' ';
        }
        for(int j=0;j<=n-i-1;j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << '*';
        }
        for(int j=2*(n-i-1);j>0;j--)
        {
            cout << ' ';
        }
        for(int j=0;j<=i;j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}

int main()
{
    int input ;
    cin>>input;
    print_pattern(input);
    return 0;
}

//Error is coming due to space distribution in online compiler