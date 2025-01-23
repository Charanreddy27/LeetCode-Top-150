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
    vector<int> preorder(TreeNode* root, vector<int> &ans){
        if(root == NULL) return ans;
        ans.push_back(root->val);
        if(root->left) preorder(root->left,ans);
        if(root->right) preorder(root->right,ans);
        return ans;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        // vector<int> ans;
        // return preorder(root,ans);

        vector<int> ans;
        if(root==NULL) return ans;
        stack<TreeNode*> st;
        st.push(root);
        while(st.size()>0){
            TreeNode* front = st.top();
            st.pop();
            ans.push_back(front->val);
            if(front->right) st.push(front->right);
            if(front->left) st.push(front->left);
        }
        return ans;
    }
};