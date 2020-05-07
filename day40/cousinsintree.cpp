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
    
    pair<int,int> getInfo(TreeNode* root,int val,int degree,int parent)
    {
        if(root==NULL)
            return {-1,-1};
        
        if(root->val == val)
            return{degree,parent};
        
        pair<int,int> left = getInfo(root->left,val,degree+1,root->val);
        if(left.first!=-1 || left.second!=-1)
            return left;
        pair<int,int> right = getInfo(root->right,val,degree+1,root->val);
        return right;
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) {
     
        pair<int,int> temp1 = getInfo(root,x,0,-1);
        pair<int,int> temp2 = getInfo(root,y,0,-1);
        

        if(temp1.first==temp2.first && temp1.second!=temp2.second)
            return true;
        else
            return false;
    }
};
