/*
Given a number n, find number of numbers that are greater than n
using the same set of digits as n. n might have duplicate digits.
*/
long countNums(int *number,int size,int *fact,int *freq){
    
    if(size==0 || size==1){
        return 0;
    }
    
    long int x=1;
    
    for(int i=0;i<10;i++){
        if(freq[i]>0){
            x=x*fact[freq[i]];
        }
    }
    
    long int ans=0;
    for(int i=number[0]+1;i<10;i++){
        if(freq[i]>0){
            ans+=((fact[size-1]*freq[i])/x);
        }
    }
    freq[number[0]]--;
    ans+=countNums(number+1,size-1,fact,freq);
    return ans;
}


long numberOfNumbersWithDuplicatesHelper(int* input,int* fact,int* freq,int n){
    if(n==0||n==1){
        return 0;
    }
    int val=1;
    for(int i=0;i<10;i++){
        if(freq[i]>0)
            val=val*fact[freq[i]];
    }
    long ans=0;
    for(int i=input[0]+1;i<10;i++){
        if(freq[i]>0){
         ans=ans+(fact[n-1]*freq[i])/val;
        }
    }
    freq[input[0]]--;


    ans=ans+numberOfNumbersWithDuplicatesHelper(input+1,fact,freq,n-1);
	return ans;
}

long numberOfNumbersWithDuplicates(long num){
    
	long int copy=num;
    int size=0;
    while(copy>0){
        size++;
        copy=copy/10;
    }
    int *number=new int[size];
     int freq[10]={0};
    for(int i=0;i<size;i++){
        number[size-1-i]=num%10;
        freq[num%10]++;
        num=num/10;
    }
 
    
    int *fact=new int[size+1];
    fact[0]=1;
    for(int i=0;i<size;i++){
        fact[i+1]=fact[i]*(i+1);
    }
    
 return countNums(number,size,fact,freq);


}

