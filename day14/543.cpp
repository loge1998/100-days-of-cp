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
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)
            return 0;
        
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        int current = left + right;
        
        int leftDia = diameterOfBinaryTree(root->left);
        int rightDia = diameterOfBinaryTree(root->right);
        return max(current,max(leftDia,rightDia));
    }
    
    
    int getHeight(TreeNode* node)
    {
        if(node==NULL)
            return 0;
        
        return(max(getHeight(node->left),getHeight(node->right))+1);
    }
};
