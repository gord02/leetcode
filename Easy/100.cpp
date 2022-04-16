  // Time taken: 6 minutes
//     Runtime: 3 ms, faster than 59.06% of C++ online submissions for Same Tree.
// Memory Usage: 10.5 MB, less than 7.68% of C++ online submissions for Same Tree.
    void df(TreeNode* node, vector<string> &num) {
        if(node == nullptr) {
            num.push_back("#");
            return;
        }
        num.push_back(to_string(node->val));
        df(node->left, num);
        df(node->right, num);
    }
    
     bool isSameTree(TreeNode* p, TreeNode* q) {
         vector<string> nump;
         df(p, nump);
         vector<string> numq;
         df(q, numq);
         if(numq == nump) {
             return true;
         }
         return false;
     }
    

// 100. Same Tree
// TIME TAKEN: 50 minutes due to different ideas failing 
// Very fast but also very space inefficient, 7% better than most

  void inorder(TreeNode* node, vector<int> &vals, vector<int> &chil) {
        if(node == nullptr) {
            return;
        }
        if(node->left != nullptr && node->right != nullptr ) {
            chil.push_back(3);
        }
//         left = 1 
        if(node->left != nullptr && node->right == nullptr ) {
            chil.push_back(1);
        }
//         right = 2
        if((node->left == nullptr && node->right != nullptr) ) {
            chil.push_back(2);
        }
        
        if(node->left == nullptr && node->right == nullptr) {
            chil.push_back(0);
        } 
        inorder(node->left, vals, chil);
        vals.push_back(node->val);
        inorder(node->right, vals, chil);
    }
    //     bool inorder(TreeNode* node, TreeNode* node2) {
    //     if(node == nullptr) {
    //         return false;
    //     }
    //     if(inorder(node->left, node2->left) == inorder(node->left, node2->left))
    //     vec.push_back(node->val);
    //     inorder(node->right, vec);
    //     return true;  
    // }
    bool isSameTree(TreeNode* p, TreeNode* q) {
//         inoder travels for each of the nodes and push results into array them compare arrays
        // stack<int> vec1;
        // stack<int> vec2;
        vector<int> vals1;
        vector<int> vals2;
        
        vector<int> chil1;
        vector<int> chil2;
        
        inorder(p, vals1, chil1);
        inorder(q, vals2, chil2); 
        
        // inorder(p, vec1);
        // inorder(q, vec2);
        // for(int i: chil1) {
        //     cout << i << " " << flush;
        // }
        // cout << endl;
        // for(int i: chil2) {
        //     cout << i << " " << flush;
        // }
        // while(vec1.empty() == false) {
        //     // cout << i << " " << flush;
        //     int top = vec1.top();
        //     vec1.pop();
        //     cout << top << " " << flush;
        // }
        // cout << endl;
        // while(vec2.empty() == false) {
        //     // cout << i << " " << flush;
        //     int top = vec2.top();
        //     vec2.pop();
        //     cout << top << " " << flush;
        // }
        
        if(chil1 == chil2 && vals1 == vals2) {
            return true;
        }else{
            return false;
        }
        
    }
