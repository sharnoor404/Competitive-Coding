/*
Given a number, convert all 0's in it to 5
*/
int convertFive(int n)
{
    int ans=0;
    int temp=n;
    int count=0;
    
    while(temp>0){
        temp=temp/10;
        count++;
    }
    
    while(count>0){
        int x=n/pow(10,count-1);
        x=x%10;
        if(x==0){
            ans=ans*10+5;
        }else{
            ans=ans*10 + x;
        }
        count--;
    }
    
    return ans;
}

