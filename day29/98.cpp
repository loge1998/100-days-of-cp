/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool isBST(TreeNode* root,long long int minVal,long long int maxVal)
    {
        if(root==NULL)
            return true;
        else
        {
            if(minVal<root->val && root->val<maxVal)
            {
                return isBST(root->left,minVal,root->val) && 
                    isBST(root->right,root->val,maxVal); 
            }
        }
        return false;
    }
    
    
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;
        if(root->left==NULL && root->right==NULL)
            return true;
        return isBST(root,LLONG_MIN,LLONG_MAX);
    }
};
