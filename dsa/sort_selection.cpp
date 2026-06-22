#include <iostream>
#include <vector>

using namespace std;

void sort_selection(vector<int> &nums)
{
    int size = nums.size();
    for(int i=0;i<size-1;i++)
    {
        int min = i;
        for(int j=i+1;j<size;j++)
        {
            if(nums[j] < nums[min])
            {
                min = j;
            }
        }
        swap(nums[i],nums[min]);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    sort_selection(arr);

    for (int &val : arr) {
        cout << val << " ";
    }

    return 0;
}