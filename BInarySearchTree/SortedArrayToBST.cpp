TreeNode<int>* ToBst(vector<int>&arr,int lo,int hi){
  if(lo>hi)
      return NULL;
   
   int mid = (lo+hi)/2;
   TreeNode<int>* root = new TreeNode<int>(arr[mid]);
    
    root->left = ToBst(arr,lo,mid-1);
    root->right = ToBst(arr,mid+1,hi);
    
    return root;
}

TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    if(n==0)
        return NULL;
    
    return ToBst(arr,0,n-1);
    
    
}