// 70. Climbing Stairs
// TIME TAKEN: 1 hour and 40 mins roughly
// works on smal values of n, everthing is is too slow
// optomixed version with vector of factorial still doesn't work for large values 
int factorial(int product) {
        if((product) == 2) {
            return 2;
        }
        if((product) <= 1) {
            return 1;
        }else{
            return (product*factorial(product-1));
        }
    }
   long long factorial_array(vector<long long> &facts, int n) {
        if(n <= 2) {
            return facts[n];
        }
        for(int i =3; i<=n; i++) {
            facts[i] = i*facts[i-1];
        }
        return facts[n];
    }
    int climbStairs(int n) {
//         calcuate number of 2s possible by repeatedly subtracting n by two until it cannot be subtrat any further while incrementing a counter of 2s
//         use this number to find the number of 1s
//         use eqauation of permuations to find the number of conbinations for s specifc value of 2s possible from the number of 2s calacuated down to zero and add the all together
        // vector<int> facts(n+1);
         if(n == 1) {
            return 1;
        }
        vector<long long> facts(n+1);
        facts[1] = 1;
        facts[0] = 1;
        facts[2] = 2;
     
        int highest_num_of_2s = 0;
        int d = n;
        while(d >0) {
            if(d <= 1) {
                break;
            }
            d = d-2;
            highest_num_of_2s++;
        }
        cout <<"highest_num_of_2s: " << highest_num_of_2s << endl;
        
        int total_combos = 0;
        for(int i=highest_num_of_2s; i>=0; i--) {
            // total_combos = factorial(highest_num_of_2s + (highest_num_of_2s - n))
            // finding a
            cout << "loop #: " << i << endl;
            // int a = (i + (n - i)); 
            int a = n-i; 
            int num_1s = n - i*2; 
            cout << "num_1s: " << num_1s << endl;
            
//             calculating a factorial
            long long facted_a = factorial_array(facts, a);
            // int facted_a = factorial(a*factorial(a-1));
            cout << "a: " << a << " facted a: " << facted_a << endl;
            // =======
            // int fact_of_2s =  factorial(i*factorial(i-1));
            long long fact_of_2s =  factorial_array(facts, i);
            // int fact_of_2s =  factorial(i*factorial(i-1));
            long long fact_of_1s =  factorial_array(facts, num_1s);
            cout << "fact_of_2s: "<< fact_of_2s << " fact_of_1s: " << fact_of_1s << endl;
            // =======
            
            int new_set_of_combs = facted_a/(fact_of_1s*fact_of_2s);
            cout << "new_set_of_combs(perms with repetition): " << new_set_of_combs << endl;
            total_combos = total_combos + new_set_of_combs;
        }
        return total_combos;
 
    }
