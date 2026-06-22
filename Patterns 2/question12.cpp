#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
   for (int i=1;i<=n;i++)
   {
        for (int j=1;j<=i;j++){
            cout<<j;
        }
        for (int k=1;k<=2*(n-i);k++){
            cout<<' ';
        }
        for (int j=i;j>0;j--){
            cout<<j;
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