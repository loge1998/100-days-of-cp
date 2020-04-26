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
    int curIndex = 0;
    
    TreeNode* bstUtil(vector<int>& preorder,int parentVal)
    {
        if(curIndex==preorder.size() || preorder[curIndex]>parentVal)
            return NULL;
        
        int curVal = preorder[curIndex++];
        TreeNode* temp = new TreeNode(curVal);
        temp->left = bstUtil(preorder,curVal);
        temp->right = bstUtil(preorder,parentVal);
        return temp;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return bstUtil(preorder,INT_MAX);
    }
};
