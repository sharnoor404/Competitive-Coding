/*
Break words problem Coding Ninjas
*/

void breakWords(char* S)
{
	for(int i=0;i<strlen(S);i++){
        int start=i;
        while(S[i]!=' ' && S[i]!='\0'){
            i++;
        }
        if((i-start)%2==0 && (i-start)>=4){
            for(int j=strlen(S);j>=start+(i-start)/2;j--){
                S[j+1]=S[j];
            }
            S[start+(i-start)/2]=' ';
           }
}
}

