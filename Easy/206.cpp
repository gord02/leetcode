 // 206. Reverse Linked List
//     TIME TAKEN: 24 minutes,could have been around 10 if I was aware that not setting the last node in new list to nullptr would create endless loop
//     Very fast, 96.7%, less than 10.0% for space time complexity
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) {
            return head;
        }
        stack<ListNode*> le_stack;
        
//         push all of nodes into stack
        while(head != nullptr) {
            le_stack.push(head);
            head = head->next;
        }
        ListNode* begin = le_stack.top();
        ListNode* start = begin;
        bool wasSet = false;
        le_stack.pop();
        
        while(le_stack.empty() == false) {
            cout << "hle" << endl;
            ListNode* top = le_stack.top();
            le_stack.pop();
            begin->next = top;
            if(!wasSet) {
                start = begin;
                cout <<"start->val: " << start->val << endl;
                wasSet = true;
            }  
            begin = begin->next;
            if(le_stack.empty()) {
                begin->next = nullptr;
            } 
        }
        return start;
    }