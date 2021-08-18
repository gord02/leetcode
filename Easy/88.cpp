// Merge Sorted Array
// Tike taken : 40 mintues
int partition(vector<int> &nums1, int left, int right) {
        int x = nums1[left];
        int j = left;
        for(int i=left+1; i<=right; i++) {
            if(nums1[i] <= x) {
               j++;
               swap(nums1[i], nums1[j]);
            } 
        }
        swap(nums1[left], nums1[j]);
        return j;
    }
    void quicksort(vector<int> &nums1, int left, int right) {
        if(left >= right) {
            return;
        }
        int m = partition(nums1, left, right);
        quicksort(nums1, left, m-1);
        quicksort(nums1, m+1, right);
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int ele: nums2) {
//             for(int i=0; i<m; i++) {
//                 if(ele >= nums1[i]) {
//                     nums1[m+i] = ele;
//                     swap(nums1[m+i], nums1[i+1]);
// //                     move onto next element in num2
//                     break;
//                 }else{
                    
//                 }
//             }
//         }
//         insert all of num2 into nums1
        for(int i = m; i <= nums1.size()-1; i++) {
            nums1[i] = *nums2.begin();
            nums2.erase(nums2.begin());
            
        }

//         sort array
        int left = 0; 
        int right = nums1.size()-1;
        quicksort(nums1, left, right);
       
        return;
    }