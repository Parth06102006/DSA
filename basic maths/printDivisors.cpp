#include <bits/stdc++.h>
using namespace std;
int* printDivisors(int n,int &size){
// Write your code here
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
        }
    }
    size = v.size();
    int* arr = new int[size];//here the element is stored into a memory location that i created as if it is not then thee array would pointer refrencnce would be send and themn if the function i sclodes then it would not be able to access the next poisitiona s the moemnmory is now freed so does the stored divsiors but this allocated memory needs to be explicitly removed using delete arr[]
    for(int i=0;i<size;i++) arr[i] = v[i];    
    return arr;
}

int* printDivisors2(int n,int &size){
// Write your code here
    vector<int>v;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if((n/i)!=i)
            {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    size = v.size();
    int* arr = new int[size];//here the element is stored into a memory location that i created as if it is not then thee array would pointer refrencnce would be send and themn if the function i sclodes then it would not be able to access the next poisitiona s the moemnmory is now freed so does the stored divsiors but this allocated memory needs to be explicitly removed using delete arr[]
    for(int i=0;i<size;i++) arr[i] = v[i];    
    return arr;
}
