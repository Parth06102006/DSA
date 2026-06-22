#include <bits/stdc++.h>
using namespace std;

void insertDash(string s1,string s2)
{
    int min_size = min(s1.size(),s2.size());
    for(int i=0;i<min_size;i++)
    {
        if(min_size == s1.size() && min_size == s2.size())
        {
            cout<<s1[i]<<'-'<<s2[i];
        }
        else
        {
            cout<<s1[i]<<'-'<<s2[i]<<'-';
        }
    }

    for(int i = min_size;i<s1.size();i++)
    {
        if(i==s1.size()-1)
        {
            cout<<s1[i];
        }
        else
        {
            cout<<s1[i]<<'-';
        }
    }

    for(int i = min_size;i<s2.size();i++)
    {
        if(i==s2.size()-1)
        {
            cout<<s2[i];
        }
        else
        {
            cout<<s2[i]<<'-';
        }
    }
}

int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    insertDash(s1,s2);
}