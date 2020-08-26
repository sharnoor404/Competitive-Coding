/*
Minimum steps to 1 : CN
*/

//Approach 1: Recursive
#include<climits>
int countStepsToOne(int n)
{
    if(n==1){
        return 0;
    }
    int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	if(n%3==0){
        x=countStepsToOne(n/3);
    }
    if(n%2==0){
        y=countStepsToOne(n/2);
    }

        z=countStepsToOne(n-1);
    
    return std::min(x,std::min(y,z))+1;
}

//Approach 2: 
#include<climits>
int countStepsToOne(int n)
{
	int *arr=new int[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=0;
    }
	
    for(int i=2;i<=n;i++)
    {
        int x=INT_MAX,y=INT_MAX,z=INT_MAX;
        if(i%3==0 && i/3>0){
            x=arr[i/3];
        }
        if(i%2==0 && i/2>0){
            y=arr[i/2];
        }
        if(i-1>0){
             z=arr[i-1];
        }
           
        arr[i]=std::min(x,std::min(y,z))+1;
    }
    int output=arr[n];
    delete[] arr;
    return output;
}

