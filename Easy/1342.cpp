#include <iostream>
#include <string>
using namespace std;
   
//    not fast enough work on speed 

int numberOfSteps (int num) {
    int count=0;
    while(num!=0){
//         check if its even using modulous
        if(num%2!=0) {
            num =num-1;
            count++;
        }
        if(num==0){
            return count;
        }
        num = num/2;
        count++;
    }
}
int main(){}