class Solution {
public:
//      fill the list nums 1 from the back since at the back there is only 0s so we are not overwriting a numbers we might nned to move later on. We will from the back by comapring the largest elements of the n and m numbers of each list respectvely 
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        n--;
        m--;
        int p = nums1.size()-1;
        while(n >= 0 && m>=0) {
            if(nums2[n] >= nums1[m]) {
                nums1[p] = nums2[n];
                n--;
            }else{
                nums1[p] = nums1[m];
                m--;
            }
            p--;
        }
        while(n>=0) {
            nums1[p] = nums2[n];
            n--;
            p--;
        }
         while(m>=0) {
            nums1[p] = nums1[m];
            m--;
            p--;
        }
    }
};

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