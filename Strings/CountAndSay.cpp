/*
Count and Say Sequence IB
*/

string Solution::countAndSay(int A) {

    string ans="";
    if(A<=0){
        return ans;
    }
    ans+="1";
    
    A--;
    
   while(A>0){
        string x="";
        for(int j=0;j<ans.size();j++){
            int count=1;
            char temp=ans[j];
            int k=j+1;
            while(k<ans.size() && ans[k]==ans[j]){
                count++;
                k++;
            }
            
            x+=(count+'0');
            x+=temp;
            j=k-1;
        }
            ans=x;
            
            A--;
    }
    
    return ans;
}

