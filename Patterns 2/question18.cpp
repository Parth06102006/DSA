#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    for (char i=1;i<=n;i++)
    {
        for (char j='E'-i+1;j<='E';j++){
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