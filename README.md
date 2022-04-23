# leetcode
These are all my leetcode questions

Priority Queue:

Min queue Comparator:

```
 struct compare {
<!--  copmares map keys -->
      bool operator()(const map<string, int>::iterator & i, const map<string, int>::iterator & j) {
          if( i->second  == j->second) {
<!--     orders from least to greatest       -->
              return i->first < j->first;
          }else{
<!--     orders from greatest to least, pop and top affect the end of the queue, we have min queue       -->
              return i->second > j->second;
          }
      }
  };
 ```
 ```
 priority_queue<map<string, int>::iterator, vector<map<string, int>::iterator>, compare> q;
 ```
        
