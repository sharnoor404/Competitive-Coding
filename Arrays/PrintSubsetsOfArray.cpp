/*
Given an integer array (of length n), find and print all the subsets of input array.
*/

void printHelper(int input[], int size,int *output,int m){
    if(size==0){
        for(int i=0;i<m;i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    
    int *newOutput=new int[m+1];
    for(int i=0;i<m;i++){
        newOutput[i]=output[i];
    }
    newOutput[m]=input[0];
    
    printHelper(input+1,size-1,newOutput,m+1);
    printHelper(input+1,size-1,output,m);
}


void printSubsetsOfArray(int input[], int size) {
    int *output=new int[size];
	for(int i=0;i<size;i++){
        output[i]=0;
    }
    int m=0;
    printHelper(input,size,output,m);
}

