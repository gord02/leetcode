//     160. Intersection of Two Linked Lists
//     TIME Taken: 20 minutes
//     Slow: faster than 25.63%, bad space complexity, less than 8.05%
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         push all of one head list into vecotr
//         for the next head, go through it and see if next pointer is laready stored in it 
        // vector<ListNode *> list_nodes;
        map<ListNode *, int> dict_nodes;
        
        int ind = 0;
        while(headA != nullptr) {
            // list_nodes.push_back(headA->next);
            dict_nodes.insert(pair<ListNode*, int> (headA, ind));
            headA = headA->next;
            ind++;
        }
        while(headB != nullptr) {
            if(dict_nodes.find(headB) != dict_nodes.end()) {
                // return *dict_nodes.find(headB);
                return headB;
            }
            headB = headB->next;
        }
        return nullptr;
    }