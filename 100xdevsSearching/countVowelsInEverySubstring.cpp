#include <bits/stdc++.h>
using namespace std;

bool isVowel(char character){
    character = (char)tolower(character);
    char characters[5] = {'a','e','i','o','u'};
    for(int i=0;i<5;i++)
    {
        if (character == characters[i]) return true;
    }
    return false;

}

void count_vowels(string statement,int k){
    vector<int> v_count;
    int length = statement.size();
    int count = 0;
    for(int i=0;i<k;i++)
    {
        bool check = isVowel(statement[i]);
        if(check) count++;
    }
    v_count.push_back(count);

    for(int j=k;j<length;j++)
    {
        bool check1 = isVowel(statement[j]);
        bool check2 = isVowel(statement[j-k]);
        if(check2) count--;
        if (check1)count++;
        v_count.push_back(count);
    }

    for(int i=0;i<v_count.size();i++)
    {
        cout<<v_count[i]<<" ";
    }
}

int main(){
    string statement = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int k = 5;
    count_vowels(statement,k);
}