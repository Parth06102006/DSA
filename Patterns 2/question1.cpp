#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
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

//count the symmetry here and print the outer loop
//for inner loop ficus on the columns and print the columns and it is connected to rows and columns