#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
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

//there are five rows and in each row has like 1,2,3,4 and so on columns upto maximum 5 columns 