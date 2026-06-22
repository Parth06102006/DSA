#include <bits/stdc++.h>
using namespace std;
// here for the brute force first generate all the permutations in sorted order then search and return the next element we can generate all the permutations using recurssion
// there is a inbuilt function for it as well next_permutation(arr.begin(),arr.end())

//optimal solution
// phele bhai check kar tu break point break point woh hai jab tu last element se shru karega and aage tak jaayega jab tak tune usse bada element nahi dekha jaise tujhe lage ki bada element mil gaya toh ruk jaa and breakpoint ko record karle
// uske baad jab tune break point record kar liya fir check kar ki konsa aisa element hai ki jo usse breakpoint wale element se just bada hai sabse bada nahi bass just bada fir usko tu last element se and breakpoint wali value se compare kar and jaha mile woh just bada element waha karde swap and karde break
// fir ab next element nikaalna hai toh bass tu kuch mat kar bass jo breakpoint ke baad elements hai unhe tujhe ascending order mai sort karna hai but haa ek cheez or sort algo ki jagah jo bache hue elements hai unhe reverse karde since tu unhe reverse karega then tujhe ek naya next permutation mil jaayega
// yaha par tu index ya breakpoint ki value phele -1 rakhega fir agar index -1 hi raha bass tujhe array reverse karna hai pura as woh last permutation hai toh tujhe first array dena hai bass jo sabse chota hoga

vector<int> nextPermutation(vector<int> nums)
{
    int index = -1;
    int n = nums.size();
    for(int i=n-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            index = i;
            break;
        }
    }

    if(index=-1)
    {
        for(int i=0;i<n/2;i++)
        {
            swap(nums[i],nums[n-i-1]);
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        if(nums[index]<nums[i])
        {
            swap(nums[index],nums[i]);
            break;
        }
    }

    reverse(nums.begin()+index+1,nums.end());
}