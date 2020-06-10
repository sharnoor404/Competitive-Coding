/*
Given a random integer array/list(ARR) of size N. 
Push all the zeros that are present in the array/list to the end of it.
Also, make sure to maintain the relative order of the non-zero elements.
*/

void pushZeroesEnd(int *input, int size)
{
    int nextIndex=0;
    
    for(int i=0;i<size;i++){
        if(input[i]!=0){
            int temp=input[i];
            input[i]=input[nextIndex];
            input[nextIndex]=temp;
            nextIndex++;
        }
    }
    
}
