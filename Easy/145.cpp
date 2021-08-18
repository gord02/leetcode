//     145. Binary Tree Postorder Traversal
//     TIME Taken: 3 minutes only due to familiarity 
//     very fast(100% better) not very space efficient, 16.50% better
void postOrder(TreeNode* root, vector<int> &nums) {
    if(root == nullptr) {
        return;
    }
    postOrder(root->left, nums);
    postOrder(root->right, nums);
    nums.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> nums;
    postOrder(root, nums);
    return nums;
}