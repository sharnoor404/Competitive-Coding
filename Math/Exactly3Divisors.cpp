/*
Given a positive integer value N. 
The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.
*/

int exactly3Divisors(int N)
{
    int x=pow(N,0.5);
    vector<bool> num(x+1);
    for(int i=0;i<=x;i++){
        num[i]=true;
    }
    num[0]=false;
    num[1]=false;
    int count=0;
    for(int i=0;i<num.size();i++){
        if(num[i]==true){
            for(int j=2;i*j<num.size();j++){
                num[i*j]=false;
            }
            count++;
        }
    }
    return count;
}

