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
    
    void levelOrderUtil(TreeNode* root,vector<vector<int>>&ans,int level,int &index)
    {
        if(root==NULL)
            return;
        else
        {
            if(level>=index)
            {
                ans.push_back({});
                index++;
            }
            ans[level].push_back(root->val);
            levelOrderUtil(root->left,ans,level+1,index);
            levelOrderUtil(root->right,ans,level+1,index);
        }
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root==NULL)
            return {};
        int index=0;
        vector<vector<int>> ans;
        levelOrderUtil(root,ans,0,index);
        return ans;
    }
};
