#include<bits/stdc++.h>
using namespace std;

bool f(int i,string s,int n)
{
    if(i>=n/2){
        return true;
    }

    if((char)tolower(s[i])!=(char)tolower(s[n-i-1]))
    { 
        return false;
    }
    return f(i+1,s,n);
}

int main()
{
    string s;
    getline(cin,s);
    bool checkPallindrome = f(0,s,s.length());
    cout<<"Result : "<<(bool)checkPallindrome<<endl;
}


//here the time complexity is O(N/2) and space complexity is O(N/2) also as roughly half the function calls are stored

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        // Your code goes here
        vector<vector<int>> count[nums.size() + 1];
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            int count = 0;
            for(auto jt=nums.begin();jt!=nums.end();jt++)
            {
                if(*it==*jt)
                {
                    count++;
                }
            }
            count.push_back({*it,count})
        }
        return count;

    }
};