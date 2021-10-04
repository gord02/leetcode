// 404. Sum of Left Leaves
//     TIME TAKEN: 13 minutes, should have been, 11 minutes for solution that should be correct but isnt, FORGOT KEY DETAIL IN QUESTION
//     faster than 72.29%, space,  less than 41.77%
    
    int sumOfLeftLeaves(TreeNode* root) {
//         breadth fiest approach
        int sum =0;
        // levelTraversal(root, sum);
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty() == false) {
            TreeNode* front = q.front();
            q.pop();
            if(front->left != nullptr) {
                q.push(front->left);
                if(front->left->left == nullptr &&  front->left->right == nullptr ) {
                    sum = sum + front->left->val;
                }
            }
            if(front->right != nullptr) {
                q.push(front->right);
            }
        }
        return sum;
    }