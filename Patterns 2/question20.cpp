#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    /* for (int i=0;i<n;i++)
    {
        for(int j=0;j<=i-1;j++)
        {
            cout << '*';
        }
        for(int j=0;j<2*(n-i);j++)
        {
            cout << ' ';
        }
        for(int j=0;j<=i-1;j++)
        {
            cout << '*';
        }
        cout << endl;
    }
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            cout << '*';
        }
        for(int j=2*(i)-1;j>=0;j--)
        {
            cout << ' ';
        }
        for(int j=0;j<=n-i-1;j++)
        {
            cout << '*';
        }
        cout << endl;
    } */
   for (int i=0;i<2*n-1;i++)
   {
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++)
        {
            cout<<'*';
        }
        for(int j=0;j<2*(n-stars);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=stars;j++)
        {
            cout<<'*';
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
