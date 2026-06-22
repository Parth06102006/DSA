#include <bits/stdc++.h>
using namespace std;

int nthrootmine(int n,int m)
{
     int low = 1,high = n;
     while(low<=high)
     {
        int mid = low+(high-low)/2;
        if(pow(mid,m)==n) return mid;
        else if(pow(mid,m)>n) low = mid-1;
        else low = mid+1;
     }
     return -1;
}

//here i need to do one thing that here instead of usong pow implemebt the function to clacualte mid^n also it might overflow to prevent that case we need to make sure that on looping if the sum becomes great then instead of checking the condition in the main loop of binary search we do it in the outisde function only

int main(){}