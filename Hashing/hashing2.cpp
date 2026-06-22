#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    //pre-compute
    int hash[26] = {0};
    for(int i=0;i<s.length();i++)
    {
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        //fetch
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}

//here if i need to charcter hashing for the characters then no problem just define the array of size 256 as at max there are 255 characters and remove the x-'a' where you are subtracting a as here the characters start from 0 only so on inddexing the ascii value of the characters would then be storer=d causing no problem