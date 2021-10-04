  225. Implement Stack using Queues
//  Time Taken: 55minutes small errors in code made it take MUCH longer than it should, very easy question tbh
//     speed is very good and space is good as well
    public:
        queue<int> q;
        queue<int> q2;
    
    /** Initialize your data structure here. */
    MyStack() {
        // queue<int> q;
        // queue<int> q2;
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        // this->q = q;
        q.push(x);
        return;
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(q2.empty() != true) {
            q2.pop();
        }
        while(q.empty() == false) {
            int front = q.front();
            cout << "front: " << front << endl; 
            q.pop();
            if(q.empty() == true) {
                    cout << "getting here" << endl;
                
                // if(q2.empty() != true) {
                    q = q2;
                    cout << "front of q2: " << q2.front() << endl;
                // }
                // while(q2.empty() != false) {
                //     q2.pop();
                // }
                return front;
            }
            cout << "pushed front to q2" << endl;
            q2.push(front);
        }
        return 3;
    }
    
    /** Get the top element. */
    int top() {
        q2 = q;
        while(q2.empty() == false) {
            int front = q2.front();
            q2.pop();
            if(q2.empty() == true) {
                return front;
            }
        }
        return 1;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q.empty() == true) {
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */