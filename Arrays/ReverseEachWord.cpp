/*
Given a string S, reverse each word of a string individually. 
*/

void reverseEachWord(char input[]) {
   

    for(int i=0;input[i]!='\0';i++){
        int start=i;
        int count=0;
        while(input[i]!=' ' && input[i]!='\0'){
            i++;
            count++;
        }
        int end=i-1;
        for(int j=start;j<start+(count)/2;j++){
            char temp=input[j];
            input[j]=input[end];
            input[end]=temp;
            end--;
        }
        
    }

}


