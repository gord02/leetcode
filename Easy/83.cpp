class Solution {
public:
//     83. Remove Duplicates from Sorted List
//     time taken: 21 minutes
    // Runtime: 22 ms, faster than 29.94% of C++ online submissions for Remove Duplicates from Sorted List.
// Memory Usage: 11.7 MB, less than 36.39% of C++ online submissions for Remove Duplicates from Sorted List.

    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* last = nullptr;
        ListNode* prev = nullptr;
        ListNode* dHead = new ListNode(0);
        dHead->next = head;
        while(head != nullptr) {
            if(prev != nullptr && prev->val == head->val) {
                 prev->next = nullptr;
                if(last != nullptr) {
                    last->next = head;                 
                }else{
//                     at the start of the list
                    dHead->next = head;
                }
            }else{
                last = prev;
            }
            prev = head;
            head= head->next;
        }
        return dHead->next;
    }
};

// 83. Remove Duplicates from Sorted List
// TIME TAKEN: 44 minutes
// very fast and space efficient 

ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* current = head;
//         pointer made for begining of list
        ListNode* beginning_node = head;
        
        if( head == nullptr || head->next == nullptr) {
            return head;
        }
        while(current->next != nullptr) {

            if(current->val == current->next->val) {
                // cout <<"Comparison between current.val: " << current->val << " and current->next.val: " << current->next->val << endl;
                
                // if(prev != nullptr) {
                // // cout << "prev.val: " << prev->val << endl;
                // }    
//                 updating beginning node in case it gets deleted
                if(current == beginning_node) {
                    // cout << "in here"  << endl;
                    if(prev != nullptr) {
                        beginning_node = prev;
                    }else{
                        beginning_node = current->next;
                    }
                }
                
                 ListNode* temp = current->next;
                // cout << "before current->next.val: " << current->next->val << endl;
                
//                 unlink current from list
                current->next = nullptr;
                
//                 move onto next element(the one that was capmraed to current)
                current = temp;
                // cout << "the new current.val: " << current->val << endl;
                if(prev != nullptr) {
                    prev->next = current;
                }
                
            }else{
                prev = current;
                current = current->next;
            }
        }
        return beginning_node;
    }