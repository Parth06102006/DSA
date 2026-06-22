int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i=0;
	for(int k=1;k<n;k++)
	{
		if(arr[i] != arr[k])
		{
			i++;
			arr[i] = arr[k];
		}
	}
	return i+1;
}