#include <bits/stdc++.h>
using namespace std;

void checkHappiness(string words)
{
    int cross = -1;
    string hour = "";
    string minutes = "";
    for(int i=0;i<words.size();i++)
    {
        if(words[i] == ':')
        {
            cross = 1;
            continue;
        }

        if(cross == -1)
        {
            hour += words[i];
        }
        else
        {
            minutes += words[i];
        }
    }

    if(hour == minutes)
    {
        cout<<"Mogambo is happy"<<endl;
    }
    else
    {
        cout<<"Mogambo is sad"<<endl;
    }
}

int main()
{
    string hour_minutes;
    getline(cin,hour_minutes);

    checkHappiness(hour_minutes);
}