 bool isPalindrome(int x) {
//  push front of number which will be converted to string into queue, push             back of string into stack
        queue<char> q;
        queue<char> q_2;
        // stack<char> stack;
        string str_x = to_string(x);
        int loops = floor(str_x.length()/2);
        
        if(str_x.length() <= 1) {
            return true;
        }
        int j = str_x.length() -1;
        // for(int i=0; i< floor(str_x.length()/2); i++) {
        for(int i=0; i< loops; i++) {
            q.push(str_x[0]);
            stack.push(str_x[str_x.length()-1]);
            q_2.push(str_x[str_x.length()-1]);
            str_x.erase(str_x.begin());
            str_x.erase(str_x.length()-1, 1); 
 
        }
        while(q_2.empty() == false) {
            cout << "loop"<< "i:"<<endl;
            
            if(q_2.front() != q.front()) {
                cout << "here" << endl;
                cout << q_2.front() << "|" <<q.front() << endl;
                return false;
            }
            stack.pop();
            q_2.pop();
            q.pop();
        }
        return true;
    }
class Solution {
public:
    bool isPalindrome(int x) {
        string str_x = to_string(x);
        int loops = floor(str_x.length()/2);
        
        for(int i=0; i< loops; i++) {
             if(str_x[0] != str_x[str_x.length()-1]) {
                 return false;
             }
            str_x.erase(str_x.begin());
            str_x.erase(str_x.length()-1, 1); 
        }

        return true;
    }
};