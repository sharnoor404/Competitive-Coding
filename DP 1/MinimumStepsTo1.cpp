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

