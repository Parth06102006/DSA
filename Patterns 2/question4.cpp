#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<=i;j++)
        {
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

//over here if i would see then here the pattern has the same number of occurences as the row number and the same number printed as the row nummber so if i need to say then here there is the in the row 1 1 is printed onceand in row 2 , 2 is printed twice 
// here we are printing the row number
