 496. Next Greater Element I
//     TIME taken: 12 minutes
//      faster than 57.38%, less than 57.30%, TRY TO IMPORVE SPACE
//     
//     I DID IMPORVE SPACE BY NOT USING EXTRA VECTOR BUT SMAE RESULTS ARE GIVEN
//     
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         map<int, int> dict;
//         for(int i=0; i<nums2.size(); i++) {
//             dict.insert(pair<int, int> (nums2[i], i));
//         }
//         vector<int> nums;
    
//         for(int i=0; i<nums1.size(); i++) {
//             auto it = dict.find(nums1[i]);
//             int start = it->second;
//             int next = -1;
//             for(int i=start+1; i<nums2.size(); i++) {
//                 if(i>=nums2.size()) {
//                     break;
//                 }
//                 if(nums2[i] > nums2[start]) {
//                     next = nums2[i];
//                     break;
//                 }
//             }
//             nums.push_back(next);
            
            
//         }
//         return nums;
//     }
       vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> dict;
        for(int i=0; i<nums2.size(); i++) {
            dict.insert(pair<int, int> (nums2[i], i));
        }
        // vector<int> nums;
        for(int i=0; i<nums1.size(); i++) {
            auto it = dict.find(nums1[i]);
            int start = it->second;
            int next = -1;
            for(int i=start+1; i<nums2.size(); i++) {
                if(i>=nums2.size()) {
                    break;
                }
                if(nums2[i] > nums2[start]) {
                    next = nums2[i];
                    break;
                }
            }
            // nums.push_back(next);
            nums1[i] = next;
              
        }
        return nums1;
    }