//week16-4b.cpp
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==0) return 0;
        int ans1=minDepth(root->left);
        int ans2=minDepth(root->right);  
        if(ans1==0) return ans2+1;
        if(ans2==0) return ans1+1;
        return min(ans1,ans2)+1;  
    }
};
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