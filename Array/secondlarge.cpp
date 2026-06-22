int secondLargest(vector<int> a,int n)
{
    int largest = a[0];
    int sLargest = -1;
    for(int i=1;i<n;i++)
    {
        if(largest < a[i])
        {
            sLargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > sLargest)
        {
            sLargest = a[i];
        }
    }
    return sLargest;
}

int secondSmallest(vector<int> a,int n)
{
    int smallest = a[0];
    int sSmallest = INT_MAX;
    for(int i=1;i<n;i++)
    {
        if(smallest > a[i])
        {
            sSmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] > smallest && a[i] < sSmallest)
        {
            sSmallest = a[i];
        }
    }
    return sSmallest;
}


vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    return {secondLargest(a,n),secondSmallest(a,n)};
}

\
//the time complacity in this case is O(N) instead of traversing it two times we traversed it in one time only