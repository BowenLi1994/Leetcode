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
    int maxPathSum(TreeNode* root) {
     
        int maxSum=INT_MIN;
        
        Sum(root,maxSum);
        
        return maxSum;
        
    }
    
    int Sum(TreeNode* root,int& maxSum){
        if(root==NULL) return 0;
        int left_gain=max(Sum(root->left,maxSum),0);
        int right_gain=max(Sum(root->right,maxSum),0);
        
        int tSum=left_gain+right_gain+root->val;
        
        maxSum=max(maxSum,tSum);
        
        return max(left_gain,right_gain)+root->val;
    }
};