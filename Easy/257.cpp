// 257. Binary Tree Paths
// serveal attempts, maybe 2.5 hours, got lucky and arrived at answer
// 11 ms, faster than 9.08%,  13.3 MB, less than 39.10% 

void depthFirst(TreeNode* node, vector<string> &paths, vector<int> &nums) {
//             reached the real leaf
        if(node != nullptr) {
            // cout << "getting here" << endl;
            if(node->left == nullptr && node->right == nullptr) {
                string s ="";
                 nums.push_back(node->val);
                
                cout <<"size: "<< nums.size()<< " current node: " << node->val << endl;
                
                for(int i=0; i<nums.size(); i++) {
                    if(i == nums.size() -1) {
                        // cout << "i ewual to: " << i << endl;
                        s = s + to_string(nums[i]);
                        break;
                    }
                    s = s + to_string(nums[i]) + "->";
                }
                paths.push_back(s);
                nums.erase(nums.begin() + nums.size()-1);
                cout << "popped" << endl;
                // nums.pop_back();
                
                // nums.clear();
                 
                cout <<"size after: "<< nums.size()<< endl;
                return;
            }
        }
        if(node == nullptr) {
            cout << "hit" << endl;
            // nums.erase(nums.begin() + nums.size()-1);
            // nums.pop_back();
            return;
        }
        cout << "pushing: "<< node->val << endl;
        nums.push_back(node->val);
       depthFirst(node->left, paths, nums);
        cout << "going right on " << node->val<< endl;
       depthFirst(node->right, paths, nums);
        cout << "finished going right" << endl;
        nums.pop_back();
        
    }
     vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
         int count = 0;
        vector<int> nums;
        depthFirst(root, paths, nums);
        return paths;
     }