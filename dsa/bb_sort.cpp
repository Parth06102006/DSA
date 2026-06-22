#include <iostream>
#include <vector>

using namespace std;


void bubble_sort(vector<int> &nums)
{
    for (int i=0;i<nums.size();i++)
    {
        bool swapped = false;
        for(int j=0;j<nums.size()-i-1;j++)
        {   
            if(nums[j] > nums[j+1])
            {
                swap(nums[j],nums[j+1]);
                swapped = true;
            }
        }

        if (!swapped)
        {
            return;
        }
    }
}   

int main()
{
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    bubble_sort(nums);
    
    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}