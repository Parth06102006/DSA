#include <bits/stdc++.h>
using namespace std;

void checkPassword(string password)
{
    int capCheck = 0;
    int smallCheck = 0;
    int numberCheck = 0;
    int specialCharacterCheck = 0;
    for(int i=0;i<password.size();i++)
    {
        if(password[i] >= 'a' && password[i] <= 'z') smallCheck=1;
        else if(password[i] >= 'A' && password[i] <= 'Z') capCheck=1;
        else if(password[i] >= '0' && password[i] <= '9') numberCheck=1;
        else specialCharacterCheck = 1;
    }

    int sum = capCheck + smallCheck + numberCheck+ specialCharacterCheck;
    if(sum == 4)
    {
        cout<<"Strong"<<endl;
    }
    if(sum == 3)
    {
        cout<<"Moderate"<<endl;
    }
    if(sum < 3)
    {
        cout<<"Weak"<<endl;
    }
}

int main()
{
    string password;
    getline(cin,password);
    checkPassword(password);
}