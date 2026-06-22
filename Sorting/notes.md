### Selection Sort
we will select smallest number and place it at the first position and swap the number at that position with the smallest number
and the array keeps on shortening and the above stepa continues until the last two elements in swpped if there are like 6 elements then in 5 steps the array will be sorted 
identify  the minimun in the entire array and its index and replace it with the the index 0 
then we go to search from index 1 to last index and then analyze the array and swap the minimun mumber and swa it at 1
and when only two elements is left then swapping happens then only

### Bubble Sort
keeps the max element at the last index by ajacent swapping of the numbers and the array is getting shorter and the maximum elemetnsa t the last indexes are not included also here for 6 elements tkes 5 steps to sort

so we went like 0-n-1
0-n-2
0-n-3
..... 0...1
we do the inner for loop iteration till i-1 as the last index element in the first iteration of the outer loop will get the value of n-2 so we need to make sure that does not happen

### Insertion Sort
It always takes a element and places it in the correct position 
for e.g => 
14 9 15 12 6 8 13
we go to first two elements then first swap the first two elements 14 9 and swap it to 9 14
then go next element 15 see that does it need swap no! so go to next element
next element 12 for array {9,14,15} it needs swap here yes so here the array becomes 9,12,14,15 similaryl we go till last element to enter the element inside the array and make it at it's correct position
so the array becomes : 6 8 9 12 13 14 15

### Merge Sort
Another sorting algorithm all other takes time complexity of O(N) it is much more efficient and sorts on basis of chars,string and numbers

n=9
merge sort means divide and merge
we can divide 9 elements into two parts by 4 and 5 or 5 and 4

following 5 and 4 path
one array has 5 elemenets and other has 4 elements
we will follow the same pattern and divide 5 if we follow same pattern of division that is dividig big and then small
so here dividing 5 elements we divide it into 3 and 2 as it is odd number 
then we divide 3 into 2 and 1 then here are 2 elemnets then we divide it into 1 and 1 elements and then we cannot continue and then we merge it then we combine it into the array in sorted order 

the elements with 2 has been sorted and then i have for e.g  [1,3] and [2] the two arrays will now have to merge in sorted order and then we chack which elements must come in the merged array and then we will get [1,2,3] and we have got sorted array so we divide all the elements till the single elements come after that we would compare all the elemnets and then sort it and merge it into single array
for e.g -> [1,2,3] was the left half sorted array and [1,4] is the right half sorted array and then we would merge both the left half and right half and then we would merge it and get the sorted array here if we would sort any of the 1 would occupy first then 2 , 3 and so on 4 will occupy and we get [1,1,2,3,4] then it is again other right half to sort first but there are 4 elements then we would divide it first then similar wayas the previous explanation we would divide , sort and merge it
and then we would merge both the halfs in a sorted manner and we would then merge and get the sorted array

what are we doing , we are dividing it on the basis of index
if 5 is the length of the array then low=0 (first index) and high=4 (highest index)
i would takhe the array and divided it into two parts then i would get the with low as 0 and high as 2 this is the first half and the second half is low=3 and high=4

take array  

function to merge_sort(arr,low,high)

arr = [3,2,4,1,3]

we would assing the low=0 and high=4 {length(arr)-1}

mid = (low+high)/2

then we would do recursion and call the merge_sort()

if(low==high) return;
merge_sort(arr,low,mid)
merge_sort(arr,mid+1,high)
merge(arr,low,mid,high)

so here what have we done is that we would check the base condition for recursion then we get the mid we then call the merge_sort for two divided arrays after we do back tracking and returns the call on continuous division and reaching the base condition then we would apply merge() function then we would need to merge the two arrays after merging we would keep on merging untill the original array has been sorted

the merge function
merge(arr,low,mid,high){
    temp_array = {}
    left = low;
    right=mid+1;
    while(left<=md && right<=high)
    {
        if(arr[left] <= arr[right])
        {
            int temp = arr[left];
            temp_array.push(temp);
            left++;
        }
        else
        {
            int temp = arr[right];
            temp_array.push(temp);
            right++;
        }
    }

    while(left<=mid) add all the leftover elements
    {
        int temp=arr[left];
        temp_array.push(temp);
        left++;
    }

    while(right<=high) add all the leftover elements
    {
        int temp=arr[right];
        temp_array.push(temp);
        right++;
    }

    for(int i=low;i<=high;i++)
    {
        arr[i] = temp_array[i-low]

    }
}

## Quick Sort
it sorts in the ascending and descending order as well
quick sort has time complexity by O(N*log2N) and the space complaxity is O(1)

pick up any element from the array and then using the any element 

e.g -> int arr[] = {4,6,2,5,7,9,1,3}
if we are given a array then pick an pivot
it can be first element
last element 
median element of the array
random element of the array

i would pick up the first element from the array here which is 4 
i would pick up the pivot and place it in its correct place it does not manner what you pick as soon as it is being placed in the correct place and place all the elements as per the greater and smaller then the pivot

so i had picked the 4 as pivot then after applying the sorting what i would get is

2  1  3  4  6  5  7  9

here [2  1  3] is smaller than 4
and here [6  5  7  9] is greater than 4

i would repeat the steps and apply it for smaller lets say {2,1,3} 
picked up 2 then sorted it and then it is sorted into {1,2,3}
so at the orginal places it would change then for left side
6  5  7  9
i would then place 6 at its correct place then i would pivot it and i got 5 and 6 at correct place then for [7,9] i would place it in correct place and would sort it and hence i would pick up the element then change it
we would be using low and high concepts in merge sort not making another array
we would make low pointer pointing to first element and then high at the last index

we first need to place the pivot at its correct position for that we need to place the element like to place it
i have low = 0
high = arr.size()-1
pivot = arr[low]


4  6  2  5  7  9  1  3

see the pivot is 4 over here
then 
i have two pointers i and j 
i pointing towards the first element and j at the last then
i would see the 4 is less than 6 so it would stop then j pointer would run and see is 3 less than 4 or not no it is not so it would swap 6 and 3

4  3  2  5  7  9  1  6
after that is 3 less than 4 yes it would move to 2 is it less yes then to 5 no it is less than 4 so it would stop then j pointer would work and see is 6 less than 4 NO then move to 1 yaa it is less than 4 so it would swap 1 and 5 then

4  3  2  1  7  9  5  6

then similarly i would go on 
first with i pointer 
we woud go till 7 and it stops and on the right it would go till 1 and then it stops and crosses i so we would then swap 4 and 1 

i would get 

1  3  2  4  7  9  5  6

this is known as partition array since still we need to sort the left and the right part of the array 
[1  3  2]  [7  9  5  6]
so one array is (low,partition-1)
other array is (partition + 1 , high)
i would perform similar quick sort on this again

qs(arr,low,high)
{
    if(low<high) 
    {
        parition = f(arr,low,high);
        qs(arr,low,partition-1);
        qs(arr,partition+1,high);
    }
}

int f(arr,low,high)
{
    pivot = arr[low]
    i=low;
    j=high;
    while(i<j)
    {
        while(arr[i]<=arr[pivot] && i<=high-1)
        {
            i++;
        }
        while(arr[j]>arr[pivot] && j>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
}

this is a divide and conquer algorithm