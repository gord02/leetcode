//     232. Implement Queue using Stacks
//     TIME TAKEN: 31 minutes, i think I underestimated this wuestion so it took longer, and didnt think through my inital implementations
// speed if fast, space timecompletxity isnt bad either, 44.82%
    stack<int> s;
    stack<int> s2;
    /** Initialize your data structure here. */
    MyQueue() {
//         emptys out stack2
        while(s2.empty() != true) {
            s2.pop();
        }
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
         // cout << "x: " << x<<endl;
        
        s.push(x);
        return;
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        // s2 = s;
        while(s.empty() == false) {
            int top = s.top();
            // cout << "top: " << top<<endl;
            s.pop();
            if(s.empty() == true) {
//                 put everything back
                while(s2.empty() == false) {
                    int temp_top = s2.top();
                    s2.pop();
                    s.push(temp_top);
                }
                return top;
            }
            s2.push(top);
        }
        return 0;
    }
    
    /** Get the front element. */
    int peek() {
        s2 = s;
        while(s2.empty() == false) {
            int top = s2.top();
            s2.pop();
            if(s2.empty() == true) {
                return top;
            }
        }
        return 0;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(s.empty() == true) {
            return true;
        }
        return false;
    }
};