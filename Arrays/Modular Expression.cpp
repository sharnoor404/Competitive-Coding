/*
Modular expression
Compute pow(A,B)%C.
*/
int Solution::Mod(int A, int B, int C) {
    
    if(B==0 && C!=0){
        return 1%C;
    }
    if(B%2==0){
        long long int x=Mod(A,B/2,C);
        return ((x*x)%C);
    }else{
        long long int x;
        if(A<0){
            x=C+A;
        }else{
            x=A%C;
        }
        long long int y=x*Mod(A,B-1,C);
        return (y%C);
    }
}

