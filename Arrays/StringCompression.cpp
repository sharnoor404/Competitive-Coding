/*
Write a program to do basic string compression. 
For a character which is consecutively repeated more than once, 
replace consecutive duplicate occurrences with the count of repetitions.
For e.g. if a String has 'x' repeated 5 times, replace this "xxxxx" with "x5".
*/

void stringCompression(char input[]) {
	int nextIndex=0;
    int i=0;
    while(input[i]!='\0'){
        char temp=input[i];
        int count=0;
        while(input[i]!='\0' && input[i]==temp){
            count++;
            i++;
        }
        input[nextIndex]=temp;
        nextIndex++;
        
        if(count>1){
            input[nextIndex]='0'+count;
            nextIndex++;
        }
    }
    input[nextIndex]='\0';
    
}

