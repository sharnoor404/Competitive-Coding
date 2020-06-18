/*
Determine whether an integer is a palindrome. Do this without extra space.
*/
int Solution::isPalindrome(int A) {
    if(A<0){
        return 0;
    }
    if(A==0){
        return 1;
    }
    
    int dummy=A;
    int count=0;
   while(dummy!=0){
       dummy=dummy/10;
       count++;
   }
    
    string s=to_string(A);
    for(int i=0;i<=count/2;i++){
        if(s[i]!=s[count-1-i]){
            return 0;
        }
    }
    
  return 1;
}

