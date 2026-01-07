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
long long ans=0;
void preorder(TreeNode* node,long long &tot)
{
    if(node==NULL)return;
    preorder(node->left,tot);
    tot+=node->val;
    preorder(node->right,tot);
}
int traver(TreeNode* node,long long tot)
{
    if(node==NULL)return 0;
    long long left=traver(node->left,tot);
    long long right=traver(node->right,tot);
    long long sts=node->val+left+right;
    ans= max(ans,sts*(tot-sts));
    return sts;
}
    int maxProduct(TreeNode* root) {
        long long tot=0;
        preorder(root,tot);
        traver(root,tot);
        return ans%1000000007;
    }
};