class Solution {
public:
    int reverse(int x) {
//         use data structure stack
        stack<char> stack;
        string str_x = to_string(x);
        bool negative_sign = false;
        if(str_x[0] == '-') {
            negative_sign = true;
        }
        
        for(char i: str_x) {
            stack.push(int(i));
        }
        // string new_x = "";
         while(stack.empty() != true) {
             new_x = new_x + stack.top();
             stack.pop();
         }
        
//         deletes zeroes from front of number
        for(int i=0; i<new_x.length(); i++) {
            if(new_x[i] == 0) {
                new_x.erase(i,i);
            } else{
                break;
            }
        }
//         adds negative to front of number
        if(negative_sign) {
            new_x = '-' + new_x;
        }
        // cout << "new_x: "<< new_x << endl;
        return stoi(new_x);
    }
}

//     ====
//       int reverse(int x) {
// //         use data structure stack
//         stack<char> stack;
//         // int length = to_string(x).length();
//         string str_x = to_string(x);
//         bool negative_sign = false;
//         if(str_x[0] == '-') {
//             negative_sign = true;
//         }
//         for(char i: str_x) {
//             stack.push(i);
//         }
//         string new_x = "";
//          while(stack.empty() != true) {
//              new_x = new_x + stack.top();
//              stack.pop();
//          }
        
// //         deletes zeroes from front of number
//         for(int i=0; i<new_x.length(); i++) {
//             if(new_x[i] == 0) {
//                 new_x.erase(i,i);
//             } else{
//                 break;
//             }
//         }
// //         adds negative to front of number
//         if(negative_sign) {
//             new_x = '-' + new_x;
//         }
//         // cout << "new_x: "<< new_x << endl;
//         return stoi(new_x);
//     }
};