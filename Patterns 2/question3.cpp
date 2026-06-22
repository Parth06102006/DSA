#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
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

//the pattern over here prints numbers and the nubers printed are the row number in the row and in the column similar to the number of columns the number is assigned in the inner for loop