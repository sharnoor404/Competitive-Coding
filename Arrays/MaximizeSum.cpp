/*
Given 2 sorted arrays (in increasing order),
find a path through the intersections that produces
maximum sum and return the maximum sum.
*/

long maxPathSum(int ar1[], int ar2[], int m, int n)
{
    int i=0;
    int j=0;
    long int sum1=0;
    long int sum2=0;
    long int finalSum=0;
    while(i<m && j<n){
        if(ar1[i]<ar2[j]){
            sum1+=ar1[i];
            i++;
        }else if(ar2[j]<ar1[i]){
            sum2+=ar2[j];
            j++;
        }else{
            sum1+=ar1[i];
            sum2+=ar2[j];
            if(sum1>sum2){
                finalSum+=sum1;
            }else{
                finalSum+=sum2;
            }
           	sum1=0;
            sum2=0;
            i++;
            j++;
        }
    }
    while(i<m){
        sum1+=ar1[i];
        i++;
    }
    while(j<n){
        sum2+=ar2[j];
        j++;
    }
    if(sum1<sum2){
        finalSum+=sum2;
    }else{
        finalSum+=sum1;
    }
    return finalSum;
}

