int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i = 0;i < n;i++)
    {
        if(a[i]<a[i-1])
        {
            return 0;
        }
    }
    return 1;
}
//Most optimal code to finding if an array is sorted or Not, TC = o(N). 
