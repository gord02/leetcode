class Solution {
public:
    // 203. Remove Linked List Elements
    // time taken: 17 miuntes, ran into error becuase i wasnt actually creating a list node? not even sure how that happend but PAY ATTENTION!!!!!
//     Runtime: 22 ms, faster than 84.86% of C++ online submissions for Remove Linked List Elements.
// Memory Usage: 15.1 MB, less than 47.89% of C++ online submissions for Remove Linked List Elements.
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* dummyH = new ListNode (0, head);
        ListNode* last = dummyH;
        

        while(head != nullptr) {
            if(head->val == val) {
//                 need to remove current node
                    last->next = head->next;
                    head->next = nullptr;
                    head = last->next;
            }else{
//                 don't remove
                last = head;
                head= head->next;
            }
        }
        return dummyH->next;
    }
};


//  203. Remove Linked List Elements
//     decent speed, 43.5%, goof space, 95%
//     TIME TAKEN: wouldve taken maybe 10-15 minutes, but one error cuased by myslef delayed it. time: 23
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = nullptr;
        ListNode* begin = head;
        while(head != nullptr) {
              ListNode* next = head->next;            
//             head is being removed
            if(head->val == val) {
//                 if head is being removed and head is equal to begin, update begin
                
                if(head == begin) {
                    begin = head->next;
                  
                }
                if(prev != nullptr) {
                    prev->next = head->next;
                }
                head->next = nullptr;
                head = next;
            }else{
                prev= head;
                head = head->next;
            }
        }
        return begin;
    }