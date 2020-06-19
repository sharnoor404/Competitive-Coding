/*Given a sorted array with duplicates, A of size N.
Return the size of the new converted array A[ ] with no duplicate element.
*/

int remove_duplicate(int A[],int N)
{
int nextIndex=0;
for(int i=0;i<N;i++){
    int var=A[i];
    i++;
    while(A[i]==var && i<N){
        i++;
    }
    A[nextIndex]=var;
    nextIndex++;
    if(i<N){
       i--; 
    }
}
return nextIndex;
}
