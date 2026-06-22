#include <bits/stdc++.h>
using namespace std;

void checkBalance(string words)
{

    unordered_map<char,int> mpp;
    int countA = 0;
    int countB = 0;
    for(int i=0;i<words.size();i++)
    {
        if (words[i]== 'a') countA ++;
        if (words[i]== 'b') countB ++;
    }

    if(countA == countB) cout << "YES";
    else cout << "NO";
}


int main()
{
    string words;
    getline(cin,words);
    checkBalance(words);
}