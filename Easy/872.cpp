  // 872. Leaf-Similar Trees
//     TIME Taken: 10 minutes, a lot of stupid minor errors
//     faster than 68.70%, less than 27.90% o
    void depthFirst(TreeNode* node, vector<int> &leafs) {
        if(node != nullptr) {
            if(node->left == nullptr && node->right == nullptr) {
                leafs.push_back(node->val);
            }
        }
        if(node == nullptr) {
            return;
        }
        depthFirst(node->left, leafs);
        depthFirst(node->right, leafs);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> nums1;
        vector<int> nums2;
        depthFirst(root1, nums1);
        depthFirst(root2, nums2);
        if(nums1 != nums2) {
            return false;
        }
        return true;
    }