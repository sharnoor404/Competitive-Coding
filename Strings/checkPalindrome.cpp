int checkOddPalindromes(char s[]){

    int ans=0;
    
    for(int i=0;s[i]!='\0';i++){
        ans++;
        int leftPointer=i-1;
        int rightPointer=i+1;
        
        while(leftPointer>=0 && s[rightPointer]!='\0' && s[leftPointer]==s[rightPointer]){
            ans++;
            leftPointer--;
            rightPointer++;
        }
	}
    return ans;
}
    
int checkEvenPalindrome(char s[]){
    int ans=0;
    for(int i=0;s[i+1]!='\0';i++){
        
        if(s[i]==s[i+1]){
            ans++;
            int leftPointer=i-1;
            int rightPointer=i+2;
            while(leftPointer>=0 && s[rightPointer]!='\0' && s[leftPointer]==s[rightPointer]){
                ans++;
                leftPointer--;
                rightPointer++;
            }
        }
    }
    return ans;
}
    
    
int countPalindromeSubstrings(char s[]) {
    
    return checkOddPalindromes(s)+checkEvenPalindrome(s);
	
}

