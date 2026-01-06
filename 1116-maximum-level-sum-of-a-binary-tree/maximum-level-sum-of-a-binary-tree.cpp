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
    int maxLevelSum(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
        {
            return 1;
        }
        queue<TreeNode*>q;
        q.push(root);
        int maxi=INT_MIN,lev=0,maxlev=lev;
        while(q.size())
        {
            int n=q.size();
            int sum=0;
            lev++;
            for(int i=0;i<n;i++)
            {
                TreeNode *node=q.front();
                if(node->left != NULL)
                {
                    q.push(node->left);
                }
                if(node->right != NULL)
                {
                    q.push(node->right);
                }
                q.pop();
                sum+=node->val;
            }
            if(sum>maxi)
            {
                maxi=sum;
                maxlev=lev;
            }
        }
        return maxlev;
    }
};