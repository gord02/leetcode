//     349. Intersection of Two Arrays
//    TIME TAKEN: 40 minutes and counting, I believe would have been less time if i knew how to use sorting function, just make function static
//     faster than 11.79%,  space, less than 97.28% 
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         the returned vector should have only values within both vectors, and only one of each value
//         simple as just having a nested for loop comparing values and pushing repating ones into new array
        
        sort(nums1.begin(), nums1.end(), func);
        sort(nums2.begin(), nums2.end(), func);
        // int j = 0;

        for(int i=0; i< nums1.size() -1; i++) {
            if(nums1[i] == nums1[i+1]) {
                nums1.erase(nums1.begin() + i);
                i--;
            }
        }
        for(int i=0; i< nums2.size() -1; i++) {
            if(nums2[i] == nums2[i+1]) {
                nums2.erase(nums2.begin() + i);
                i--;
            }
        }
        // cout << "got past erasing" << endl;
        vector<int> new_vec;
        for(int i: nums1) {
            for(int j=0; j<nums2.size(); j++) {
                if(nums2[j] == i) {
                    new_vec.push_back(nums2[j]);
                }
            }
        }
        return new_vec;
    }