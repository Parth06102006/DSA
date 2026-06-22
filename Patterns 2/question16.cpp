#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    for (char i='A';i<'A'+n;i++)
    {
        for (char k='A';k<=i;k++){
            cout<<i<<' ';
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