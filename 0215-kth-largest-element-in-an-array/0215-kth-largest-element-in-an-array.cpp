class Solution {

int randomIndex(int low,int high){
    int len = high-low+1;
    return (rand()%len)+low;
}

int partitionAndReturnIndex(int low,int high,vector<int> &nums,int pivotIndex){
    int pivot = nums[pivotIndex];

    swap(nums[high],nums[pivotIndex]);

    int i = low-1;

    for(int j=low;j<high;j++){
        if(nums[j]<pivot){
            i++;
            swap(nums[i],nums[j]);
        }
    }

    swap(nums[high],nums[i+1]);

    return i+1;

}

public:

    int findKthLargest(vector<int>& nums, int k) {
        int low = 0;int high = nums.size()-1;
        k = nums.size()-k;
        while(true){
            int pivotIndex = randomIndex(low,high);

            int index = partitionAndReturnIndex(low,high,nums,pivotIndex);

            if (index == k) return nums[index];
            else if (index > k) high = index-1;
            else if (index < k) low = index+1;
        }

        return -1;
    }
};