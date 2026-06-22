#include <bits/stdc++.h>
using namespace std;

void sum_of_digits(string num)
{
    long long sum = 0;
    for(int i=0;i<num.size();i++)
    {
        if(num[i] == '0') continue;
        else sum += (num[i] - '0');
    }

    cout<<sum<<endl;
}

int main()
{
    string number;
    getline(cin,number);

    sum_of_digits(number);
}