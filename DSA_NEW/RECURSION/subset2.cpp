#include <bits/stdc++.h>
using namespace std;
// I have added the index to pick and not pick an element
// the nums vector I have added to collect all the unique elements that we get
// It is the results array which consists of the final results and the nums would be appended to this vector when reached at the appended
// The arr is the orignal array of number provided in the question

void subset(int ind,vector<int>nums,set<vector<int>> &results,vector<int> &arr){
    if(ind==arr.size()){
        results.insert(nums);
        return;
    }

    // Pick an Element
    nums.push_back(arr[ind]);
    subset(ind+1,nums,results,arr);

    // Not Pick an Element
    nums.pop_back();
    subset(ind+1,nums,results,arr);
}

int main(){
    int test_size;
    cin>>test_size;

    for(int i=0;i<test_size;i++)
    {
        int arr_size;
        cin>>arr_size;

        vector<int> arr(arr_size);

        for(int j=0;j<arr_size;j++){
            cin >> arr[j];
        }

        int ind = 0;
        vector<int> nums;
        set<vector<int>> results;
        
        subset(ind,nums,results,arr);

        for(const auto &subset : results)
        {
            for(int k=0;k<subset.size();k++){
                cout<<subset[k]<<" ";
            }
            cout<<endl;
        }
    }
}