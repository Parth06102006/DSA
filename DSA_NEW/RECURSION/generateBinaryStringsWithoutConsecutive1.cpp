#include <bits/stdc++.h>
using namespace std;

void generateString(int n , string curr ,vector<string> &results)
{
    if(curr.size() == n)
    {
        results.push_back(curr);
        return;
    }

    generateString(n,curr+"0",results);

    if(curr.empty() || curr.back() != '1')
    {
        generateString(n,curr+"1",results);
    }
}

int main()
{
    int n = 3;
    vector<string> results;
    generateString(n,"",results);
    for(string&s: results)
    {
        cout<<s<<" ";
    }
    cout<<endl;
    return 0;
}