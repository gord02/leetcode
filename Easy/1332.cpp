int removePalindromeSub(string s) {
    //if s is empty 
    if(s==""){
        return 0;
    }     
    // if s is already a palindrom
    int j=(s.size() -1);
    // int end= (s.size()-1)/2;
    int time= (s.size()-1)/2;
    // cout <<"j: "<< j << endl;
    for(int i=0;i<time;i++){
        // cout << "loop" << endl;
        // cout << j << endl;
        if(s[i]!=s[j]){
            return 2;
        }
        else if(i==time){
            return 1; 
        }
        j--;
    }
    return 1;
}