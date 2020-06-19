/*
Given an integer N. The task is to find the number of digits that appear in its factorial.
*/

int digitsInFactorial(int N)
{
    double ans=0;
   for(int i=1;i<=N;i++){
       ans=ans+log10(i);
   } 
   return (int)(ans+1);
}
