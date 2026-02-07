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
        void inorder(TreeNode* root,vector<int>&arr)
        {
            if(root==nullptr)
            return;
            inorder(root->left,arr);
            arr.push_back(root->val);
            inorder(root->right,arr);   
        }
        TreeNode* build(vector<int>&arr, int start, int end)
        {
            if(start>end)
            return nullptr;
            int mid = start+(end-start)/2;
            TreeNode* ans = new TreeNode(arr[mid]);
            ans->left = build(arr,start, mid-1);
            ans->right = build(arr,mid+1,end);
            return ans;
        }
        TreeNode* balanceBST(TreeNode* root) {
            vector<int>arr;
            inorder(root, arr);
            return build(arr,0,arr.size()-1);
        }     
};