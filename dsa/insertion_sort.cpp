#include <iostream>
#include <vector>

using namespace std;

void insertion_sort(vector<int> &nums)
{
    for (int i=0;i<nums.size();i++)
    {
        int key = nums[i];
        int j=i-1;
        while(j >= 0 && nums[j] > key)
        {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};
    int n = arr.size();

    insertion_sort(arr);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}