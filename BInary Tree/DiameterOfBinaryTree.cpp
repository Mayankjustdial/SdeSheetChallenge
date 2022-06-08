/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int solve(TreeNode<int> *root,int &d){
   if(root==NULL)
        return 0;
    
   int lh= solve(root->left,d);
   int rh = solve(root->right,d);
    
    d = max(d,(rh +lh)); 
        
     return max(lh,rh)+1;
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int d =0;
    solve(root,d);
    return d;
}
