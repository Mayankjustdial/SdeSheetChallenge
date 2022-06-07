/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void inOrder(vector<int> &ans, TreeNode* root){
    if(root==NULL){
        return;
    }
    inOrder(ans, root->left);
    ans.push_back(root->data);
    inOrder(ans, root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    inOrder(ans, root);
    return ans;
}