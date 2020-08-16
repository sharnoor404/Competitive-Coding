/*
Implement Atoi : GFG
*/
int atoi(string str)
{
    int ans=0;
    int sign=1;
    for(int i=0;i<str.length();i++){

        if(i==0 && str[0]=='-'){
            sign=-1;
        }else{
         if(str[i]>='0' && str[i]<='9'){
            ans+=(str[i]-'0');
            if(i<str.length()-1){
                ans=ans*10;
            }
        }else{
            return -1;
        }   
        }
    }
    return ans*sign;
}

