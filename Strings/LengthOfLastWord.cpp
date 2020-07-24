/*
Find Length of Last Word of the given String
*/

//using strlen()
int i=A.size()-1;
    
    while(i>=0 && A[i]==' '){
        i--;
    }
    int count=0;
    
    while(i>=0 && A[i]!=' '){
        i--;
        count++;
    }
    return count;
    
//without using any library

    int max_count=0;
    int count=0;
    
    for(int i=0;A[i]!='\0';i++){
    
        if(A[i]!=' '){
            count++;
        }else{
            count=0;
        }
        
        if(count!=0){
            max_count=count;
        }
        
        
    }
    return max_count;

