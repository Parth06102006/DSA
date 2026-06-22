#include <bits/stdc++.h>
using namespace std;

void checkThala(int number)
{
    if (number == 7)
    {
        cout << "Thala for a reason"<<endl;
        return;
    }

    int sum = 0;
    while(number != 0)
    {
        sum += number % 10;
        number /= 10;
    }

    if(sum == 7)
    {
       cout<< "Thala for a reason"<<endl;
       return;
    }

    cout << "Blocked for no reason"<<endl;
}

int main()
{
    int number_of_entries;
    cin>>number_of_entries;

    for(int i=0;i<number_of_entries;i++)
    {
        int number ; 
        cin >> number;

        checkThala(number);
    }
}