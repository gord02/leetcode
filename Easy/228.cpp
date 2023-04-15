class Solution {
public:
    // 228. Summary Ranges
//     25 minutes
    // Runtime: 8 ms, faster than 6.03% of C++ online submissions for Summary Ranges.
// Memory Usage: 6.9 MB, less than 26.98% of C++ online submissions for Summary Ranges.
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        
        int i = 0;
//         while(i < nums.size()) {
//             string start = to_string(nums[i]);
            
//             while(i+1 < nums.size() && nums[i] +1 == nums[i+1]) {
//                 i++;
//             }
//             string end = "";
//             if(i>= 1 && nums[i] == nums[i-1] + 1) {
//                 end = to_string(nums[i]);
//                 i++;
//             }else{
//                 if( start == to_string(nums[i])) { // at end
//                     res.push_back(start);
//                     break;
//                 }
//              end = to_string(nums[i-1]); // the last i we have will have broken the pattern of consetive sequences therefore we go back one to get the end of the last sequence
//             }
            
//             if(start == end) {
//                 res.push_back(start);
//             }else{
//                 string range = start+"->" + end;
//                 res.push_back(range);
//             }
            
//         }
          while(i < nums.size()) {
                string start = to_string(nums[i]);

                while(i+1 < nums.size() && nums[i] +1 == nums[i+1]) {
                    i++;
                }
                string end = to_string(nums[i]);
                if(start == end) {
                    res.push_back(start);
                }else{
                    string range = start+"->" + end;
                    res.push_back(range);
                }
                i++;
            }
            
            
        return res;
    }
};