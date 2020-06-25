/*
Implement strstr
*/

int strstr(string s, string x)
{
    if(s.size()<x.size()){
        return -1;
    }
     int position=-1;
     
     for(int i=0;i<s.size();i++){
        int j=0;
        while(i<s.size() && j<x.size() && s[i]==x[j]){
            if(position==-1){
                position=i;
            }
            i++;
            j++;
        }
        if(j==x.size()){
            return position;
        }else if(j!=0){
            i=position;
            position=-1;
        }
     }
     return position;
}
