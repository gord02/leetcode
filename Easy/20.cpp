// === TIME: 40 MINUTES ===
// only because char comparsion was tricky
  bool is_match(char top, char next) {
        if( top == '(' && next == ')') {
            return true;
        }
        if( top == '{' && next == '}') {
            return true;
        }
        if( top == '[' && next == ']') {
            return true;
        }
        return false;
    }
    bool isValid(string s) {
//         push open brackets to stack
        stack<char> le_stack;
//         when encountering close bracket, pop stack and compare
//         if mathcing then carry on, if not return false      
        for(int i=0; i< s.length(); i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                le_stack.push(s[i]);
            }else{
                if(le_stack.empty()) {
                    return false;
                }else{
                    char top =  le_stack.top();
                    le_stack.pop();
                    if(!(is_match(top, s[i]))) {
                        return false;
                    }
                }
            }
        }
        if(le_stack.empty() == false) {
            return false;
        }
        return true;
    }