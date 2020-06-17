/*
Given 2 non negative integers m and n, find gcd(m, n)
*/
int Solution::gcd(int A, int B) {
    int dividend=A;
    int divisor=B;
    while(divisor!=0){
        int remainder=dividend%divisor;
        dividend=divisor;
        divisor=remainder;
    }
    return dividend;
}

