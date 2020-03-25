#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==NULL || cloned==NULL || target==NULL)
                return NULL;
        
        TreeNode* root = cloned;
        if(root->val== target->val)
        {
            return root;
        }
        else
        {
            TreeNode* left = getTargetCopy(original,root->left,target);
            if(left!=NULL)
            {
                return left;
            }
            TreeNode* right = getTargetCopy(original,root->right,target);
            if(right!=NULL)
            {
                return right;
            }
            return NULL;
        }
    }
};