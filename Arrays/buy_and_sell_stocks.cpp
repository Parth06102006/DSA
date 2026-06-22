#include <bits/stdc++.h>
using namespace std;
// here in this problem it states that a array would be given to me with the price of the stock as values and the index as days 

int best_optimal(vector<int> nums)
{
    int mini = nums[0];
    int profit = 0;
    for(int i=1;i<nums.size();i++)
    {
        int cost = nums[i]-profit;
        profit = max(profit,cost);
        mini = min(mini,nums[i]);
    }
    return profit;
}

int main()
{

}