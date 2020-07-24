/*
Given a string,check if it is a palindrome considering only alphanumeric characters and ignoring the rest
*/

//  (1)
int Solution::isPalindrome(string A) {
    
    int pointerFromBeginning=0;
    int pointerFromEnd=A.size()-1;
    while(pointerFromBeginning<=pointerFromEnd){
        if((A[pointerFromBeginning]>='a' && A[pointerFromBeginning]<='z') || (A[pointerFromBeginning]>='A' && A[pointerFromBeginning]<='Z') || (A[pointerFromBeginning]>='0' && A[pointerFromBeginning]<='9')){
            if((A[pointerFromEnd]>='a' && A[pointerFromEnd]<='z') || (A[pointerFromEnd]>='A' && A[pointerFromEnd]<='Z') || (A[pointerFromEnd]>='0' && A[pointerFromEnd]<='9')){
                if(tolower(A[pointerFromBeginning])!=tolower(A[pointerFromEnd])){
                    return 0;
                }else{
                    pointerFromBeginning++;
                    pointerFromEnd--;
                }
            }else{
                pointerFromEnd--;
            }
        }else{
            pointerFromBeginning++;
        }
    }
   return 1; 
}

// (2): using alpnum()

   int pointerFromBeginning=0;
    int pointerFromEnd=A.size()-1;
    while(pointerFromBeginning<=pointerFromEnd){
        if(!isalnum(A[pointerFromBeginning])){
            pointerFromBeginning++;
        }
        if(!isalnum(A[pointerFromEnd])){
            pointerFromEnd--;
        }
        if(isalnum(A[pointerFromBeginning]) && isalnum(A[pointerFromEnd])){
            if(tolower(A[pointerFromBeginning])==tolower(A[pointerFromEnd])){
                pointerFromBeginning++;
                pointerFromEnd--;
            }else{
                return 0;
            }
        }
    }
      return 1;
}



