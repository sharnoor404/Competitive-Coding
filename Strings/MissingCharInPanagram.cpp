/*
Given a string s, find the missing characters in the string to make it a panagram.
*/
string missingPanagram(string str){
    string ans;
    string dummy="abcdefghijklmnopqrstuvwxyz";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            dummy[str[i]-'a']='0';
        }
    }
    
    for(int i=0;i<dummy.size();i++){
        if(dummy[i]!='0'){
            ans+=dummy[i];
        }
    }
    return ans;
}

