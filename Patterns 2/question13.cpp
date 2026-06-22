#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    int number = 1;
    for (int i=1;i<=n;i++)
    {
        for (int k=1;k<=i;k++){
            cout<<number<<' ';
            number++;
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