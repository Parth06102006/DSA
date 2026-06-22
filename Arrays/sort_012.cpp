//Dutch NATIONAL Flag Algorithm
//take three pointers low,mid,high
//everything between [0...low-1] -> 0 {extreme left}
//everything between [low+1 ... mid-1] -> 1 
//between mid+1 and high-1 it is filled with 0/1/2 either of them
//everything between [high+1 ... n-1] -> 2 {extreme right}

//[0100101222010] in this array we would mark at 0 index low and mid as 0 and right as n-1 and then we would compare 
//if (arr[mid]==0) swap(arr[low],arr[mid]) low++; mid++;
//else if(arr[mid]==1) mid++;
//else if(arr[mid]==2) swap(arr[mid],arr[high]) high--;