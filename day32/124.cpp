/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int max(int a,int b,int c)
    {
        return std::max(a,std::max(b,c));
    }
    
    int maxPathSumUtil(TreeNode* root,int &maxVal)
    {
        if(root==NULL)
            return 0;
        
        int left = maxPathSumUtil(root->left,maxVal);
        int right = maxPathSumUtil(root->right,maxVal);
        int leftOrRightOrNode = max(root->val,left+root->val,right+root->val);
        int curVal = std::max(left+right+root->val,leftOrRightOrNode);
        maxVal = std::max(curVal,maxVal);
        return leftOrRightOrNode;
    }
    
    
    int maxPathSum(TreeNode* root) {
        
        int ans = INT_MIN;
        int temp = maxPathSumUtil(root,ans);
        return ans;
    }
};
