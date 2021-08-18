// 144. Binary Tree Preorder Traversal
// Time Taken: 6 minutes, only because I QUITE familiar with how it done already
// 47.48% fatser than most Memory Usage: 8.4 MB, less than 43.46% 
void preOrder(TreeNode* root, vector<int> &nums) {
        if(root == nullptr) {
            return;
        }
        nums.push_back(root->val);
        preOrder(root->left, nums);
        preOrder(root->right, nums);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> nums;
        preOrder(root, nums);
        return nums;
}