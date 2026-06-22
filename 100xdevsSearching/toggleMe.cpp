#include <bits/stdc++.h>
using namespace std;

void transform_word(string word)
{
    string new_word = "";
    for(int i=0;i<word.size();i++)
    {
        if ((int)word[i] >= 97 && (int)word[i] <= 122)
        {
            new_word += (char)((int)word[i] - 32);
        }

        if((int)word[i] >= 65 && (int)word[i] <= 90)
        {
            new_word += (char)((int)word[i]+32);
        }
    }
    cout<<new_word<<endl;
}

int main()
{
    string word;
    getline(cin,word);

    transform_word(word);
}