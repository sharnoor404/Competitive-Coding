/*
Given n pairs of parentheses, 
write a function to generate all combinations of 
well-formed parentheses of length 2*n.
*/

void helper(int A, vector<string>& result,string s,int openBraceCount,int closeBraceCount){
  
  if(openBraceCount==A && closeBraceCount==A){
      result.push_back(s);
      return;
  }
  
   if(openBraceCount<A){
       helper(A,result,s+"(",openBraceCount+1,closeBraceCount);
   }
   if( openBraceCount>closeBraceCount && closeBraceCount<A){
       helper(A,result,s+")",openBraceCount,closeBraceCount+1);
   }
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> result;
    string s;
    helper(A,result,s,0,0);
    return result;
}

