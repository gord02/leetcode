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