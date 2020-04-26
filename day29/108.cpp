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
    
    TreeNode* util(vector<int>& nums,int low,int high)
    {
        if(low>high)
            return NULL;
        if(low==high)
            return new TreeNode(nums[low]);
        int mid = low + ceil((high-low)/2.0);
        TreeNode* temp = new TreeNode(nums[mid]);
        temp->left = util(nums,low,mid-1);
        temp->right = util(nums,mid+1,high);
        return temp;
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return util(nums,0,nums.size()-1);
        
    }
};
