#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    //precompute
    //here I have kept max size as 13 as input is 5 if the input size was 10^5 then i would have kept like 10^6 or something
    //Moreover i have kept here 13 as the last index is 12 so in input also i have 12

    //here all the 13 indexes have a value 0 since i have defined {0}

    int hash[13] = {0};

    for(int i=0;i<n;i++)
    {
        hash[arr[i]] += 1; 
    }

    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }
    return 0;
}