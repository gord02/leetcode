//     965. Univalued Binary Tree
//     time taken: 5 minutes
//     4 ms, faster than 48.26%, 10 MB, less than 42.36%
    void depthFirst(TreeNode* node, int val, bool &same) {
        if(node != nullptr) {
            if(node->val != val) {
                same = false;
                return;
            }  
        }
       if(node == nullptr) {
           return;
       } 
        depthFirst(node->left, val, same);
        depthFirst(node->right, val, same);
    }
    bool isUnivalTree(TreeNode* root) {
        int val = root->val;
        bool same = true;
        depthFirst(root, val, same);
        return same;
    }