// DFS
#define ll long long
class Solution {
private:
    ll sums[100000] = {0};
    int maxLevel = 0;       

    void solve(TreeNode* root, int lvl) {
        if (!root) return;

        // Add the node's value to its level sum
        sums[lvl] += root->val;

        // Update the maximum level
        maxLevel = max(maxLevel, lvl);

        solve(root->left, lvl + 1);
        solve(root->right, lvl + 1);
    }

public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        solve(root, 0);

        // Sort only the part of sums that has non-zero values, i.e., up to maxLevel + 1
        sort(sums, sums + maxLevel + 1, greater<ll>());

        // Check if the k-th largest level exists
        return (k > maxLevel + 1) ? -1 : sums[k - 1];
    }
};