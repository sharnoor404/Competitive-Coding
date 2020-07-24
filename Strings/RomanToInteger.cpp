/*
Convert given roman number to integer
*/

int computeNum(char x){
    switch(x){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
}
int Solution::romanToInt(string A) {

    int sum=0;
    
    for(int i=0;i<A.size();i++){
        
        if(i==A.size()-1 || computeNum(A[i])>=computeNum(A[i+1])){
            sum=sum+computeNum(A[i]);
        }else{
            sum=sum-computeNum(A[i]);
        }
        
    }
   return sum; 
}

