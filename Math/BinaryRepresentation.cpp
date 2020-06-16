/*
Given a number N >= 0, find its representation in binary.
*/

string Solution::findDigitsInBinary(int A) {
    
    string s;
    
    if(A==0){
        s='0';
        return s;
    }
    
    while(A>=1){
        char c='0'+A%2;
        s=c+s;
        A=A/2;
    }
    return s;
}





