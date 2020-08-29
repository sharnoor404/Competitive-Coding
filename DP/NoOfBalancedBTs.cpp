/*
Number of balanced binary trees : CN
*/
int binaryTreesOfHeightH(int h) {
    long long int *balancedBTs=new long long int[h+1];
    balancedBTs[0]=1;//NULL tree
    balancedBTs[1]=1;//single node tree
    for(int i=2;i<=h;i++){
        balancedBTs[i]=((balancedBTs[i-1]*balancedBTs[i-1])%1000000007+(2*balancedBTs[i-1]*balancedBTs[i-2])%1000000007)%1000000007;
    }
    return balancedBTs[h];
}


