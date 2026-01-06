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
void preorder(TreeNode* node,queue<TreeNode*>&q){
    if(node==NULL)return;
    q.push(node);
    preorder(node->left,q);
    preorder(node->right,q);
}
    void flatten(TreeNode* root) {
        queue<TreeNode*>q;
        preorder(root,q);
        if(!q.empty())q.pop();
        while(!q.empty()){
            root->right=q.front();
            root->left=NULL;
            q.pop();
            root=root->right;
        }
    }
};