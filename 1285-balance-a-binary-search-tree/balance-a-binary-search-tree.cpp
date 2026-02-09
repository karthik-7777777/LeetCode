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
TreeNode* Build(vector<int>&srtarr,int st,int en){
    if(st>en)return NULL;
    int m=(st+en)/2;
    TreeNode* NN=new TreeNode(srtarr[m]);
    NN->left=Build(srtarr,st,m-1);
    NN->right=Build(srtarr,m+1,en);
    return NN;
}
void inorder(TreeNode* root,vector<int>&srtarr){
    if(root->left)inorder(root->left,srtarr);
    srtarr.push_back(root->val);
    if(root->right)inorder(root->right,srtarr);
}
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>srtarr;
        inorder(root,srtarr);
        int n=srtarr.size();
        return Build(srtarr,0,n-1);
    }
};