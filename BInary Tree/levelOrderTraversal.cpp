/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int> v; 
        
        if(root == NULL) 
            return v; 
            
        queue<BinaryTreeNode<int>*> q; 
        q.push(root); 
        
        while(!q.empty()) {
           
            BinaryTreeNode<int> *temp = q.front(); 
            q.pop(); 
            
            if(temp->left != NULL) 
                q.push(temp->left); 
            if(temp->right != NULL) 
                q.push(temp->right); 
                
            v.push_back(temp->val); 
        }
        return v; 
    
    
}