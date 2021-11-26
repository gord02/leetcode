//     226. Invert Binary Tree
//     Time Taken: 10 minutes, fingers were cold and I was out of it kind of leading to typos everywwhere
//     Runtime: 4 ms, faster than 49.52%, Memory Usage: 9.8 MB, less than 37.30%
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) {
            return root;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.empty() != true) {
            TreeNode* front = q.front();
            q.pop();
            
            TreeNode* temp = front->right;
            front->right = front->left;
            front->left = temp;
            
            if(front->left != nullptr ) {
                q.push(front->left);
            }
            if(front->right != nullptr) {
                q.push(front->right);
            }
        }
        return root;
    }
    
    
//     226. Invert Binary Tree
//     TIME TAKEN: 12 minutes, pretty easy question 
//     faster than 52.12%, less than 76.91%
//     TreeNode* invertTree(TreeNode* root) {
// //         breadth first traversal
// // for each node, swpa its children
//         if(root == nullptr) {
//             return root;
//         }
//         queue<TreeNode*> q;
//         q.push(root);
//         while(q.empty() == false) {
//             TreeNode* front = q.front();
//             TreeNode* old_left = front->left;
//             TreeNode* old_right = front->right;
//             front->left = old_right;
//             front->right = old_left;
//             cout << front->val << " " << flush;
//             q.pop();
// //             enqueue children
//             if(front->left != nullptr) {
//                 q.push(front->left);
//             }
//             // else{
//             //     q.push(nullptr);
//             // }
//             if(front->right != nullptr) {
//                 q.push(front->right);
//             }
//             // else{
//             //     q.push(nullptr);
//             //  }  
//         }
//         return root;
//     }
// //     levelTraversal(TreeNode* node) {
        
//     }
//     TreeNode* invertTree(TreeNode* root) {
//         if(root == nullptr) {
//             return root;
//         }
//         queue<TreeNode*> q;
//         // q
//         q.push(root);
//         while(q.empty() == false) {
//             TreeNode* front = q.front();
//             q.pop();
//             // q.push_back(front->val);
//             cout << "here" << endl;
            
//             if(front->left != nullptr && front->right != nullptr) {
//                 cout << "here" << endl;
//                 // swap
//                 TreeNode* temp = front->left;
//                 front->left = front->right;
//                 front->right = temp; 
// //                 push
//             q.push(front->right);
//             q.push(front->left);
                
//             }
//             if(front->left != nullptr && front->right == nullptr) {
//                 front->right = front->left;
//                 front->left = nullptr; 
//                 // q.push(front->right);
//                 // q.push(front->left);
//             }
//             // else{
//             //     front->left = front->right;
//             //     front->right = nullptr; 
//             //     q.push(front->right);
//             //     q.push(front->left);
//             // }
//             // if(front->right != nullptr) {
//             //     q.push(front->right);
//             // }

//         }
        
//         return root;
//     }


// =========


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