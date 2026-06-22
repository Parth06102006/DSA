#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    for (int i=1;i<=n;i++)
    {
        for (char k='A';k<'A'+i;k++){
            cout<<k<<' ';
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