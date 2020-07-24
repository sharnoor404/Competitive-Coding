/*
Add two binary strings
*/

string Solution::addBinary(string A, string B) {
    
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    
    string ans="";
    
    int i=0;
    int carry=0;

    
    while(i<A.size() && i<B.size()){
        
        
        if(carry==1){
            if(A[i]=='0'){
                A[i]='1';
                carry=0;
            }else{
                A[i]='0';
                carry=1;
            }
        }
        
        
        if(A[i]=='0'){
            if(B[i]=='0'){
                ans+='0';
            }else{
                ans+='1';
            }
        }else{
            if(B[i]=='0'){
                ans+='1';
            }else{
                ans+='0';
                carry=1;
               
            }
        }

       i++; 
    }
    
    while(i<A.size()){
        if(carry==0){
            ans+=A[i];
        }else{
            if(A[i]=='0'){
                ans+='1';
                carry=0;
            }else{
                ans+='0';
                carry=1;
            }
        }
        i++;
    }
    
    while(i<B.size()){
        if(carry==0){
            ans+=B[i];
        }else{
            if(B[i]=='0'){
                ans+='1';
                carry=0;
            }else{
                ans+='0';
                carry=1;
            }
        }
        i++;
    }
    
    if(carry!=0){
        ans+='1';
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}

