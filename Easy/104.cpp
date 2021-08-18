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