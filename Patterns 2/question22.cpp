#include<bits/stdc++.h>
using namespace std;

void print_pattern(int n){
   for (int i=0;i<2*n-1;i++)
   {
        for (int j=0;j<2*n-1;j++)
        {
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i;
            cout << (n-min(min(top,bottom),min(left,right)));
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
