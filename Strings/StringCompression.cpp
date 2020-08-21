/*
String compression 
*/

int compress(vector<char>& chars) {
        int nextChar=0;
        int i=0;
        while(i<chars.size()){
            char curr=chars[i];
            int count=0;
            while(i<chars.size() && chars[i]==curr){
                i++;
                count++;
            }
            if(chars[nextChar]!=curr){
                chars[nextChar]=curr;
            }
            nextChar++;
            if(count>1){
                string newcount=to_string(count);
                for(int i=0;i<newcount.size();i++){
                    chars[nextChar]=newcount[i];
                    nextChar++;
                }
            }
        }
        return nextChar;
    }
