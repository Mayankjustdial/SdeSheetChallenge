int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
    for(int i=0;i<arr.size();i=i+2)
    {
        if(arr[i]!=arr[i+1])
        {
            return arr[i];
        }
    }
}
