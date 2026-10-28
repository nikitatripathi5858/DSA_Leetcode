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
 void inorder(TreeNode* root,vector<int>&res){
        if(root == NULL) return;
        inorder(root->left,res);
        res.push_back(root->val);
         inorder(root->right,res);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>res;
         inorder(root,res);
         int i = 0 , n=res.size();
         int j = n-1,sum=0;
         while(i<j){
            sum = res[i]+res[j];
           if(sum>k){
            j--;
           }else if(sum<k){
                i++;
           }else{
            return true;
           }
         }
         return false;
    }
   
};