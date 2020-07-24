/*
Reverse the string word wise under the following constraints:
the returned string should not contain leading or trailing zeroes even if it is present in the input string
in case of multiple spcaces between words, the spaces should be reduced to single
*/
string Solution::solve(string A) {
    
    string ans="";
    
    for(int i=A.size()-1;i>=0;i--){
        while(i>=0 && A[i]==' '){
            i--;
        }
        int start=i;
        
        while(i>=0 && A[i]!=' ')
        {
            i--;
        }
        
        for(int j=i+1;j<=start;j++){
            if(ans.size()!=0 && j==i+1){
                ans+=" ";
            }
            ans+=A[j];
            
        }
        
    }
    
    return ans;
}

