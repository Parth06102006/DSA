#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    unordered_map<int,int>hash;//depending on the size of the numbers i can define my data type e.g as long long
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
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
//a map takes a time complexity logN and the unorder_map takes time complexity as O(1) and the worst time complexity will be O(N) hence it is better to use unorder_map if the time limit exceeds then switch back to map and that happens once in a blue moon and that happens due to internal collisions 