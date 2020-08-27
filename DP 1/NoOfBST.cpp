/*
No. of BSTs
*/
#define x 1000000007
int countBST( int n)
{
    long long int *arr=new long long int[n+1];
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        long long int sum=0;
        for(int j=i;j>=1;j--){
            sum=(sum%x+(arr[j-1]*arr[i-j])%x)%x;
        }
        arr[i]=sum;
    }
return arr[n];
}



