#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
/*     for (int i = 1;i<=n;i++)
    {
        for (int k=1;k<=2*i-1;k++)
        {
            cout << '*';
        }
        cout << endl;

    }
    for (int i = 1;i<=n;i++)
    {
        for (int k=1;k<=2*(n-i-1)+1;k++)
        {
            cout << '*';
        }
        cout << endl;

    } */
   for (int i=1;i<=2*n-1;i++)
   {
        int stars  = i;
        if(i>n) stars = 2*n-i;
        for (int j=1;j<=stars;j++){
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