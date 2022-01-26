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
    int diameterOfBinaryTree(TreeNode* root) {
        
        int res=0;
        diameter(root,res);
        
        return res;
    }
    
    int diameter(TreeNode* root, int& res){
        if(root==NULL) return 0;
        int leftPath=diameter(root->left,res);
        int rightPath=diameter(root->right,res);
        
        res=max(res, (leftPath+rightPath));
        
        
        return max(leftPath,rightPath)+1;
    }
};