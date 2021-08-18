//     167. Two Sum II - Input array is sorted
//     time Taken: full hour plus etra time after, maybe 2 hours total
//     very fast, 100% faster than most, very space inefficent, 5.92% 
//         int binarySearch(int remainder, int index1, int left, int right, vector<int>numbers) {
//         if(left>= right) {
// //             remainder wasn't found, move on
//             return index1;
//         }
//         int m = floor(right-left/2) + left;
//         if(numbers[m] == remainder) {
//             return m;
//         }
//         else if(numbers[m] < remainder) {
//             right = m -1; 
//         }else{
//             left = m+1;
//         }
//         binarySearch(remainder, index1, left, right, numbers);
//         cout << "getting here" << endl;
//         return index1;
//     }
    void binarySearch(int remainder, int &index_2, int left, int right, vector<int>numbers) {
        if(left> right) {
//             remainder wasn't found, move on
            // return index_2;
            return;
        }
        int m = floor((right-left)/2) + left;
        // cout << "m: " << m << endl;
        if(numbers[m] == remainder) {
              index_2 = m;
            return;
            // return m;
        }
        else if(numbers[m] < remainder) {
            // right = m -1; 
            left = m+1;
            
        }else{
            right = m -1; 
            // left = m+1;
        }
        binarySearch(remainder, index_2, left, right, numbers);
        // cout << "getting here" << endl;
        // return index_2;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
// //         DOESN'T WORK TOO SLOW
// //         Naive apporch would simply be to use nested fro loop to compare each number
//         // if(numbers.size() == 2) {
//         //     return numbers;
//         // }
        
//         int index_1;
//         int index_2;
//         // for(int i=0; i<numbers.size()-1; i++) {
//         //     for(int j=i+1; j < numbers.size(); j++) {
//         //         if(numbers[i] + numbers[j] == target) {
//         //             index_1 = i+1;
//         //             index_2 = j+1;
//         //             cout << "index_1: " << index_1 << " index_2: " << index_2 << endl;
//         //             numbers.clear();
//         //             numbers.push_back(index_1);
//         //             numbers.push_back(index_2);
//         //             return numbers;   
//         //         }
//         //     }
//         // }
        
//         // return numbers;
        
// //         Apporch 2,
// //         leverage the fact that it is sorted array than use binary search for elememnts closest to target number
//         if(number.size() == 2) {
//             numbers.clear();
//             numbers.push_back(1);
//             numbers.push_back(2);
//             return numbers;
//         }
//         int left = 0;
//         int right = numbers.size();
//         int m = 0;
//         for(int i=0; i<nubmers.size(); i++) {
//              m = floor(right-left/ 2) + left;
//             if(numbers[m] == target || numbers[m] < target) {
//                 right = m -1; 
//             }else{
//                 left = m+1;
//             }
            
//             third apporch
//             starting fromt he beginning of array, subtract that value from the target, if not negative use search for the remainder inside the array
        
        // remvoe all numbers that appear more than twice? to help with speed
        for(int i=0; i<numbers.size(); i++) {
            
        }
            int right = numbers.size() -1;
            for(int i=0; i<numbers.size(); i++) {

                    if(target - numbers[i] >= 0) {
//                         for loop to skip over repeating values in array, if the repeated value adds up to traget, don't add
                    for(int n = i; n<numbers.size() -1; n++) {
//                  if(+1 < numbers.size() && numbers[i+1] != numbers[i]) {}
                        if(numbers[n+1] != numbers[n] && numbers[n] + numbers[n] != target) {
                            i = n;
                            // cout << " i due to n is:" << i << flush;
                            break;
                        }
                        else if(numbers[n+1] != numbers[n]) {
                             i = i;
                            break;
                        }
                    // cout<< endl; /
                }
                        
                        int index_1 = i;
                        int index_2 = i;
                        int left = i+1;
                        int remainder = target - numbers[i];
                        if(remainder == 496) {
                            cout << "index of 134: " << i << endl;
                        }
                        // cout << "remained: " << remainder << " left: " << left << " right: " << right <<endl;
                        binarySearch(remainder, index_2, left, right, numbers);
                        if(index_2 != index_1) {
                            numbers.clear();
                            numbers.push_back(index_1 +1);
                            numbers.push_back(index_2 +1);
                            return numbers;
                        }
                    }    
                // }
            }
            return numbers;
        }
    // }