#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
   for (int i=0;i<n;i++)
   {
        for (int j=0;j<n;j++)
        {
            (i==0||i==n-1||j==0||j==n-1) ? cout<<"*":cout<<" ";
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
