class Solution {
public:
    // 21. Merge Two Sorted Lists
//     time taken: 13 minutes 
//     Runtime: 13 ms, faster than 35.31% of C++ online submissions for Merge Two Sorted Lists.
// Memory Usage: 14.9 MB, less than 44.26% of C++ online submissions for Merge Two Sorted Lists.

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* head = dummyHead;
        while(list1!= nullptr && list2!= nullptr) {
            if(list1->val <= list2->val) {
                head->next = list1;
                list1 = list1->next;
            }else{
                head->next = list2;
                list2 = list2->next;
            }
            head = head->next;
        }
        if(list1!= nullptr) {
            head->next = list1;
        }else{
            head->next = list2;
        }
        return dummyHead->next;
    }
};

// runtime error for some reason even tho I can print out everything
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
               // ListNode* next_l2 = nullptr;
               ListNode* next_l2 = l2;
              ListNode* prev_l1 = nullptr;
              // ListNode* current = l2;
              ListNode* begin = l1;
              bool chosen = false;
            if(l1 == nullptr && l2 != nullptr) {
                  return l2;
              }
            if(l1 != nullptr && l2 == nullptr) {
                  return l1;
              }
                while(l1 != nullptr) {
                  if(l2->val <= l1->val) {
                    cout << "l2->val: " << l2->val << " l1->val: " << l1->val << endl;
                    if(!chosen) {begin = l2; chosen = true; cout << "chosen" << endl;}
                    if(prev_l1 != nullptr) {
                      cout << "prev_l1: " <<prev_l1->val << endl;
                        
                         prev_l1->next = l2;
                     }
//                       capture next
                      // if(l2->next != nullptr) {
                      // cout << "l2->next->val " << l2->next->val << endl;
                        next_l2 = l2->next;
                      
                      
                      // }
                      l2->next = l1;
                      prev_l1 = l2;
                      // cout << "next_l2 val: " << next_l2->val << endl;
                      if(next_l2 == nullptr ) { 
                          cout << "got in here" << endl;
                          break;} 
                    l2 = next_l2;

                  }else{
                      prev_l1 = l1;
                      l1 = l1->next;
                  }
                }
//               append l1 to l2
              if(prev_l1 != nullptr) {
                prev_l1->next = l2;
              }
              
              cout << begin->val << endl;
              cout << begin->next->val << endl; //wrong
              cout << begin->next->next->val << endl; //wrong
              cout << begin->next->next->next->val << endl; //wrong
              cout << begin->next->next->next->next->val << endl; //wrong
              cout << begin->next->next->next->next->next->val << endl; //wrong

              return begin;
          }