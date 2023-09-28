int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i =0;
	for(int j = 1 ;j< n; j++)
	{
		if(arr[i]!= arr[j])
		{	
			i++;
			arr[i] = arr[j];
			
		}
	}
	return i+1;
}
//This is the optimal solution to removing duplicates in an array
//Time Complexity: O(N) 
//Space Complexity: O(1)
