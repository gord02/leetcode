//     104. Maximum Depth of Binary Tree
//     Time taken: 18 minutes, Had to fix a few bugs here and there and fixed how some logic work oppose to how it was detailed in sudo code
//     I used some trick i learned for my work to fix the error in depth calcuation 
//     Runtime: 12 ms, faster than 40.77% of C++, Memory Usage: 19 MB, less than 13.92%
    void dF(TreeNode* node, int &depth, int &maxDepth) {
        if(node==nullptr) {
            return;
        }else{
            if(node->left == nullptr && node->right == nullptr) {
// reached leaf
                depth++;
                if(depth > maxDepth) {
                    maxDepth = depth;
                }
                // depth = 1;
                // return;
            }else{
                depth++;
            }
        }
        dF(node->left, depth, maxDepth);
        dF(node->right, depth, maxDepth);
//         once you've left the node, decrement the depth
        depth--;
    }
    int maxDepth(TreeNode* root) {
        int depth = 0;
        int maxDepth = 0;
        dF(root, depth, maxDepth);
        return maxDepth;
    }
    
// ==========


// //     int levelTraversal(TreeNode* root) {
// // //         create queue
// //         queue<TreeNode *> q;
// //         q.push(root);
// //         int height = 1;
// //         while(q.empty() != true) {
// // //             dequeue
// //             TreeNode* node = q.top();
// //             q.pop();
// //             if(node->left != nullptr) {
// //                 height++;
// //                 q.push(node->left);
// //             }
// //             if(node->right != nullptr) {
// //                 q.push(node->right);
// //             }
// //         }
// //         return height;
// //     }
//     int levelTraversal(TreeNode* root) {
//         int height =1;
//         queue<TreeNode*> q;
//         q.push(root);
//         q.push(nullptr);
//         while(q.empty() != true) {
//             TreeNode* front = q.front();
//             q.pop();
//             if(front == nullptr) {
//                 height++;
//                 q.push(nullptr);
//                 if(q.front() == nullptr) {
//                     break;
//                 }
                
//             }
//             if(front->left != nullptr) {
//                 q.push(front->left);
//             }
//             if(front->right != nullptr) {
//                 q.push(front->right);
//             }
            
//         }
//         return height;
//     }
//     void depthFirst(TreeNode* root,int &height, int current) {
//         if(root == nullptr) {
// //             reached leaf
// //             compare current height to max height;
//             if(current > height) {
//                 height = current;
//             }
//             return;
//         }
//         current++;
//         depthFirst(root->left, height, current);
//         depthFirst(root->right, height, current);
//     }
//     int maxDepth(TreeNode* root) {
//         if(root == nullptr) {
//             return 0;
//         }
//         int height = 1;
//         return levelTraversal(root);
//         // depthFirst(root, height, 0);
//         return height;
// //         // create queue
// //         if(root == nullptr) {
// //             return 0;
// //         }
// //         queue<TreeNode *> q;
// //         q.push(root);
// //         int height = 1;
// //         while(q.empty() != true) {
// // //             dequeue
// //             // height++;
// //             // vector<int> temp_vec;
// //             TreeNode* node = q.front();
// //             queue< TreeNode*> temp_q = q;
// //             // if(q.size() > 1) {
// //             //     height++;
// //             // }
// //             // if(q.size() -1 == 1) {
// //             //     break;
// //             // } 
// //             while(temp_q.empty() == false) {
// //                  TreeNode* front = temp_q.front();
// //                 temp_q.pop();
// //                 cout << front->val << " " << flush;
// //             }
// //             cout << endl;
            
// //             q.pop();
       
            
       
// // //             if(node->left != nullptr && node->right != nullptr) {
// // //                  height++; 
// // //             }else{
// // //                 if(node->left == nullptr && node->right != nullptr) {
// // //                     height++; 
// // //                 }
                    
// // //                 if(node->left != nullptr && node->right == nullptr) {
// // //                      height++; 
// // //                 }
// // //             }
    
// //             if(node->left != nullptr) {
// //                 // height++;
// //                 q.push(node->left);
// //             }
// //             if(node->right != nullptr) {
// //                 q.push(node->right);
// //             }
// //             height++;
            
// //         }
// //         return height;
    // }


// 104. Maximum Depth of Binary Tree
// TIME TAKEN: 12 minutes for depth first approach, depth first was unsuccessful, took around 40 mintues to move on from
void depthFirst(TreeNode* root,int &height, int current) {
        if(root == nullptr) {
//             reached leaf
//             compare current height to max height;
            if(current > height) {
                height = current;
            }
            return;
        }
        current++;
        depthFirst(root->left, height, current);
        depthFirst(root->right, height, current);
    }
    int maxDepth(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }
        int height = 1;
        depthFirst(root, height, 0);
        return height;
//         // create queue
//         if(root == nullptr) {
//             return 0;
//         }
//         queue<TreeNode *> q;
//         q.push(root);
//         int height = 1;
//         while(q.empty() != true) {
// //             dequeue
//             // height++;
//             // vector<int> temp_vec;
//             TreeNode* node = q.front();
//             queue< TreeNode*> temp_q = q;
//             // if(q.size() > 1) {
//             //     height++;
//             // }
//             // if(q.size() -1 == 1) {
//             //     break;
//             // } 
//             while(temp_q.empty() == false) {
//                  TreeNode* front = temp_q.front();
//                 temp_q.pop();
//                 cout << front->val << " " << flush;
//             }
//             cout << endl;
            
//             q.pop();
       
            
       
// //             if(node->left != nullptr && node->right != nullptr) {
// //                  height++; 
// //             }else{
// //                 if(node->left == nullptr && node->right != nullptr) {
// //                     height++; 
// //                 }
                    
// //                 if(node->left != nullptr && node->right == nullptr) {
// //                      height++; 
// //                 }
// //             }
    
//             if(node->left != nullptr) {
//                 // height++;
//                 q.push(node->left);
//             }
//             if(node->right != nullptr) {
//                 q.push(node->right);
//             }
//             height++;
            
//         }
//         return height;
    }