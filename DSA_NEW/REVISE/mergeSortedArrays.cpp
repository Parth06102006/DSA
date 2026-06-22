#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if (n == 0) return;

    int i = 0;
    int j = 0;
    int  k ;

    // got the index pointing to 0
    for(int s=0;s<m+n;s++)
    {
        if(nums1[s]==0) {
            k = s;
            break;
        }
    }

    while(k!=m+n)
    {
        if(nums1[i]<=nums2[j]) i++;
        else if(nums1[i]>nums2[j])
        {   
            k++;
            for(int l = i;l<m+n-1;l++)
            {
                nums1[l+1] = nums1[l];
            }
            nums1[i] = nums2[j];
            j++;
        }
    }

}

int main(){}