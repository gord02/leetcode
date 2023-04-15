class Solution {
public:
    // 160. Intersection of Two Linked Lists
//     15 minutes 
    // Runtime: 95 ms, faster than 48.70% of C++ online submissions for Intersection of Two Linked Lists.
// Memory Usage: 14.6 MB, less than 32.34% of C++ online submissions for Intersection of Two Linked Lists.

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int listASize = 0;
        int listBSize = 0;
        ListNode* copy = headA;
        while(copy != nullptr) {
            listASize++;
            copy = copy->next;
        }
        copy = headB;
        while(copy != nullptr) {
            listBSize++;
            copy = copy->next;
        }
        
        int diff = abs(listASize- listBSize);
        
        if(listASize > listBSize) {
            while(diff > 0) {
                headA = headA->next;
                diff--;
            }
        }
        
        if(listASize < listBSize) {
            while(diff > 0) {
                headB = headB->next;
                diff--;
            }
        }
        
        while(headA != nullptr && headB != nullptr) {
            if(headA == headB) {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        
//         didn't interest
        return nullptr;
    }
};

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