#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    for (int i = 1;i<=n;i++)
    {
        for (int j=1;j<i;j++)
        {
            cout << ' ';
        }
        for (int k=1;k<=2*(n-i)+1;k++)
        {
            cout << '*';
        }
        for (int j=1;j<i;j++)
        {
            cout << ' ';
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