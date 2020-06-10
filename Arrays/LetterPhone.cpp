/*
Given a digit string, return all possible letter combinations that the number could represent.
*/

string mapping(char x){
    string s;
    
    switch(x){
        case '0': s="0";
                break;
        case '1': s="1";
                break;
        case '2': s="abc";
                break;
        case '3': s="def";
                break;
        case '4': s="ghi";
                break;
        case '5': s="jkl";
                break;
        case '6': s="mno";
                break;
        case '7': s="pqrs";
                break;
        case '8': s="tuv";
                break;
        case '9': s="wxyz";
                break;
    }
    return s;
}

void helper(string A,string s,vector<string>& result){
    if(A.size()==0){
        result.push_back(s);
        return;
    }
    string x=mapping(A[0]);
   // cout<<x<<endl;
    for(int i=0;i<x.size();i++)
    {
        helper(A.substr(1),s+x[i],result);
    }
}

vector<string> Solution::letterCombinations(string A) {
    
    vector<string> result;
    string s;
    helper(A,s,result);
    return result;
}

