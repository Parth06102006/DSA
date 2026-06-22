#include <bits/stdc++.h>
using namespace std;

void brute_force(vector<int>nums)
{
    int longest = 1;
    int count = 1;
    for(int i=0;i<nums.size();i++)
    {
        for(int j=0;j<nums.size();j++)
        {
            if(nums[i] == nums[j]+1)
            {
                count++;              
            }
        }
        longest = max(longest,count);
    }
}

// approach or algorithm for the better solution
/* 
    sort the array first
    intialize:
        longest = 1
        current_count = 0
        last_smaller = INT_MIN

    then from 0 to n the for array is used and after that arr[j-1]== last_smaller is compared which is : if(arr[i]-1 == last_smaller)
    {
        then compare it with last smaller element
        if(arr[i]-1 == last_smaller)
        {
            current_count += 1;
            last_smaller = arr[i];
        }
        else if(arr[i]-1 != last_smaller)
        {
            current_count = 1;
            last_smaller = arr[i];
        }
            longest = max(longest,current_count);
    }
*/
// in the above solution we are distorting the array so otherwise if we use it in the below optimal solution then

// approach for the optimal solution
/* 
    first add all the elements to the unordered set into it and then for the below example
    arr[] = {102,4,100,1,101,3,2,1,1}
    for first see 102 then here since 102-1 = 101 here 101 is in the array then it is not the stating point
    after that look 4 then 3 is here not starting point
    then for 100 there is no 99 so 100 is starting point so then check 101 , 102 , 103 then we move and increase count here
    similarly and then compare the longest and the countand then see for other if there is a element less than it in the unordered set then dont iterate
*/
// it is a O(N) as we dont have to iterate at every element and also another point that here we dont have to iterate since here we are only iteratong in the elements where there is a starting point
/* 
        int n = nums.size();
        if(n==0) return 0;
        int longest = 1;
        unordered_set<int> st;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }

        for(auto it:st)
        {
            if(st.find(it-1) == st.end())
            {
                int cnt = 1;
                int x = it;
                while(st.find(x+1) != st.end())
                {
                    x = x+1;
                    cnt = cnt+1;
                }
                longest = max(longest,cnt);
            }
        }
        return longest;
*/
//code of the optimal solution


int main()
{

}