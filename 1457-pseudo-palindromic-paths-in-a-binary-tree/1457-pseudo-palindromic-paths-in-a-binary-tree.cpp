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
        int c=0;
         void solve(TreeNode *root,vector<int>v)
         {
                 if(root==NULL)
                         return ;
                 v[root->val]++;
                 if(root->left==NULL && root->right==NULL)
                 {
                       int odd=0;
                         for(auto i:v)
                         {
                                 if(i%2)
                                         odd++;
                         }
                         if(odd<=1)
                         {
                                 c++;
                         }
                         return;
                 }
                 solve(root->left,v);
                 solve(root->right,v);
         }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>v(10,0);
            solve(root,v);
       return c;
    }
};