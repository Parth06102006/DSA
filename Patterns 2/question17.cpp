#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
    for (char i=1;i<=n;i++)
    {
        char letter = 'A';
        for (char k=1;k<=n-i;k++){
            cout<<' ';
        }
        for (char j=1;j<=2*i-1;j++){
            (j>i) ? cout<<--letter<<' ': cout<<letter++<<' ';
            if(j==i) letter--;
        }
        for (char k=1;k<=n-i;k++){
            cout<<' ';
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

/* 
      A    
     ABA
    ABCBA
   ABCDCBA 

*/