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
    
    bool util(TreeNode* root,vector<int>& arr,int index)
    {
        
        if(root==NULL)
            return false;
        
        if(index==arr.size()-1)
            return (root->val==arr[index] && root->left==NULL && root->right==NULL);
        
        if(root->val == arr[index])
        {
            bool left = util(root->left,arr,index+1);
            bool right = util(root->right,arr,index+1);
            return left||right;
        }
        else
        {
            return false;
        }
        
    }
    
    
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        
        if(arr.size()==0)
            return true;
        
        return util(root,arr,0);
        
    }
};



