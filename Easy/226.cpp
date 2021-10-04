
//     226. Invert Binary Tree
//     TIME TAKEN: 12 minutes, pretty easy question 
//     faster than 52.12%, less than 76.91%
    TreeNode* invertTree(TreeNode* root) {
//         breadth first traversal
// for each node, swpa its children
        if(root == nullptr) {
            return root;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty() == false) {
            TreeNode* front = q.front();
            TreeNode* old_left = front->left;
            TreeNode* old_right = front->right;
            front->left = old_right;
            front->right = old_left;
            cout << front->val << " " << flush;
            q.pop();
//             enqueue children
            if(front->left != nullptr) {
                q.push(front->left);
            }
            // else{
            //     q.push(nullptr);
            // }
            if(front->right != nullptr) {
                q.push(front->right);
            }
            // else{
            //     q.push(nullptr);
            //  }  
        }
        return root;
    }