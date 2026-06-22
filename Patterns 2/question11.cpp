#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
   for (int i=1;i<=n;i++)
   {
        for (int j=1;j<=i;j++){
            ((i+j)%2 == 0) ? cout<<1 : cout<<0; 
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