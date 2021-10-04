//     234. Palindrome Linked List
//     TIME TAKEN: 28 minutes, I was not familair with many of vector opperations, knowing would have saved a lot of time
//      faster than 25.64% ,  less than 10.65%
    bool isPalindrome(ListNode* head) {
//         base cases
        if(head == nullptr) {
            return false;
        }
        vector<int> nums;
//         push all nodes to a list
        while(head != nullptr) {
            nums.push_back(head->val);
            head = head->next;
        }
//         compare indexes in vector
        // cout << "fails after here" << endl;
        vector<int>::iterator it = nums.begin();
        vector<int>::reverse_iterator end = nums.rbegin();
//         while(nums.size() > 0) {
//             if(it != nums.back()) {
//                 return false;
//             }else{
// //                 if(nums.size() == 1) {
// // //                     erasing is too slow 
// //                     // nums.erase(nums.begin());
// //                     it++;
                    
// //                 }else{
// //                     nums.erase(nums.begin());
// //                     nums.pop_back();    
// //                 }
//             }
//         }
        while(it != nums.end() && end != nums.rend()) {
            if(*it != *end) {
                return false;
            }else{
                it++;
                end++;
            }
        }
        return true;
    }