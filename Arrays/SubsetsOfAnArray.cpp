/***
Given an integer array (of length n), find and return all the subsets of input array.
You need to save all the subsets in the given 2D output array.
And return the number of subsets(i.e. number of rows filled in output)
 from the given function.
In ith row of output array, 1st column contains length of the ith subset.
***/

int subset(int input[], int n, int output[][20]) {
    // Write your code here
	if(n==0){
        output[0][0]=0;
        return 1;
    }
    
    int smallOutput=subset(input+1,n-1,output);
    for(int i=0;i<smallOutput;i++){
        output[smallOutput+i][0]=output[i][0]+1;
        output[smallOutput+i][1]=input[0];
        for(int j=1;j<=output[i][0];j++){
            output[smallOutput+i][j+1]=output[i][j];
        }
    }
    return 2*smallOutput;
    
}

