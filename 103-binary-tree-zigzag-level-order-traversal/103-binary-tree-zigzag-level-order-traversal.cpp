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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        pre_order(root,0,res);
        
        return res;
    }
    
    void pre_order(TreeNode* root, int depth, vector<vector<int>>& res){
        if(!root)
            return;
        if(depth>=res.size()) res.push_back({});
        
        vector<int>& t_v=res[depth];
        
        if(depth%2==0) t_v.push_back(root->val);
        else t_v.insert(t_v.begin(),root->val);
        
        pre_order(root->left,depth+1,res);
        pre_order(root->right,depth+1,res);
        
        
        
    }
};