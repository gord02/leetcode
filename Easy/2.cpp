// NOT FINISHED
//     22 minutes in counting 
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int size1 = 0;
        int size2 = 0;
        ListNode* node = l1;
        // while(node->next != nullptr) {
        while(node != nullptr) {
            size1++;
            node = node->next;
        }
        node = l2;
         // while(node->next != nullptr) {
         while(node != nullptr) {
            size2++;
            node = node->next;
        }
        // node->next = nullptr;
        // node->val = 0;
        if(size1 > size2) {
            while(size2 < size1) {
                node->next = l2;
                node->val = 0;
                // ListNode* le_node;
                // ListNode* le_node(0);
                // le_node->val = 0;
                // le_node->next = l2;
                size2++;
            }
        }
        if(size2 > size1) {
            while(size1 < size2) {
                ListNode* le_node(0);
                // le_node->val = 0;
                le_node->next = l1;
                size1++;
                
            }
        }
        node = l1;
        while(node != nullptr) {
            cout << node->val << " " << flush;
            node = node->next;
        }
        node = l2;
        while(node != nullptr) {
            cout << node->val << " " << flush;
            node = node->next;
        }
//         ===========
        bool found = false;
        ListNode* begin = nullptr;
        // while(l1->next != nullptr) {
        while(l1 != nullptr) {
            cout << "l1->val: " << l1->val << " l2->val: "  << l2->val << endl;
           if(l1->val + l2->val > 9) {
               int num = l1->val + l2->val;
               string str = to_string(num);
               int digit = str[str.length()-1] - '0';
               cout << "the digit: " << digit << endl;
               l1->val = digit;
               if(!found) {
                   found = true;
                   begin = l1;
               }
               
//                carrying over one
               if(l1->next == nullptr) {
                   ListNode* new_node;
                   new_node->val = 1;
                   l1->next = new_node;
                   new_node->next = nullptr;
               }else{
                   cout << "got here" << endl;
                   l1->next->val = l1->next->val + 1;
               }
//                addiiton wasnt over 9
           }else{
                l1->val = l1->val + l2->val;   
               
                if(!found) {
                   found = true;
                   begin = l1;
                }
               // cout << "updated" << 
           }
            l1 = l1->next;
            l2 = l2->next;
        }
        return begin;
    }