#include <iostream>
#include <vector>

using namespace std;

void shellSort(vector<int> & arr)
{
    int n = arr.size();
    for(int gap=n/2;gap>=1;gap/=2)
    {
        for(int j = gap;j<n;j++)
        {
            for(int i=j-gap;i>=0;i-=gap)
            {
                if(arr[i+gap] > arr[i]
                )
                {
                    break;
                }
                else
                {
                    swap(arr[i+gap],arr[i]);
                }
            }
        }
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr)
        cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> arr = {12, 34, 54, 2, 3}; 
    shellSort(arr);
    printArray(arr);
    return 0;
}
