// 530. Minimum Absolute Difference in BST
// TIME TAKEN: 30 minutes roughly, 
// 33 ms, faster than 10.29%, 25.6 MB, less than 24.60% 
//     
    static bool func(int i, int j){return(i<j);}
    void depthTraversal(TreeNode* root, vector<int> &nums) {
        if(root == nullptr) {
            return;
        }
        nums.push_back(root->val);
        depthTraversal(root->left, nums);
        depthTraversal(root->right, nums);
             
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> nums;
        depthTraversal(root, nums);
        sort(nums.begin(), nums.end(), func);
        int smallest = 100000;
        for(int i=0; i<nums.size()-1; i++) {
            if(abs(nums[i] - nums[i+1]) < smallest) {
                smallest = abs(nums[i] - nums[i+1]);
            }
        }
        return smallest;
        
    }