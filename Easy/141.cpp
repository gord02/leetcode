class Solution {
public:
//     was slow to solve and messed up twice, once with base case and twice when considering fast becomes null
    // Runtime: 8 ms, faster than 92.72% of C++ online submissions for Linked List Cycle.
// Memory Usage: 8 MB, less than 80.97% of C++ online submissions for Linked List Cycle.
      bool hasCycle(ListNode *head) {
          ListNode* fast = head;
          ListNode* slow = head;
          // if(head == nullptr) {
          //     return false;
          // }
          while(fast!= nullptr && fast->next != nullptr && slow != nullptr) {
              if(fast->next->next == slow->next) {
                  return true;
              }
              fast = fast->next->next;
              slow = slow->next;
          }
          return false;
      }
    // 141. Linked List Cycle
//     time taken: 15 minutes 
//     Runtime: 15 ms, faster than 49.05% of C++ online submissions for Linked List Cycle.
// Memory Usage: 8.1 MB, less than 58.46% of C++ online submissions for Linked List Cycle.
//     Intuition- let's say 2 people are running in a circular track, one person is running slowly and another person is running faster(2 times the speed of first person)
// After a certain period of time person 2 again meet or overtake person 1,


//     bool hasCycle(ListNode *head) {
//         ListNode* fast = head;
//         ListNode* slow = head;
//         bool looped = false;
//         while(fast != nullptr && slow != nullptr) {
//             if(fast == slow && looped) {
//                 return true;
//             }
//             if(fast->next == nullptr) {
// //                 we cant set fast
//                 return false;
//             }else{
//                 fast = fast->next->next;
//             }
//             slow = slow->next;
//             looped = true;
//         }
//         return false;
//     }
}; 

class Solution {
public:
    // 141. Linked List Cycle
//     time taken: 15 minutes 
//     Runtime: 15 ms, faster than 49.05% of C++ online submissions for Linked List Cycle.
// Memory Usage: 8.1 MB, less than 58.46% of C++ online submissions for Linked List Cycle.
//     Intuition- let's say 2 people are running in a circular track, one person is running slowly and another person is running faster(2 times the speed of first person)
// After a certain period of time person 2 again meet or overtake person 1,


    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        bool looped = false;
        while(fast != nullptr && slow != nullptr) {
            if(fast == slow && looped) {
                return true;
            }
            if(fast->next == nullptr) {
//                 we cant set fast, reached end of track
                return false;
            }else{
                fast = fast->next->next;
            }
            slow = slow->next;
            looped = true;
        }
        return false;
    }
};

// 141. Linked List Cycle
// TIME taken: 31 minutes 
// slow because a map was used, but it seemed like best course of action at the time
// faster than 6.6% and space time complexity better than 7.6%