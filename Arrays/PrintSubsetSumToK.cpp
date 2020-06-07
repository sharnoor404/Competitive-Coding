void printSubsetHelper(int input[], int size, int k,int *output,int index){
    if(k==0){
        for(int i=0;i<index-1;i++){
            cout<<output[i]<<" ";
        }
        cout<<output[index-1];
        cout<<endl;
        return;
    }
        for(int i=0;i<size;i++){
            if(input[i]<=k){
                output[index]=input[i];
                printSubsetHelper(input+i+1,size-i-1,k-input[i],output,index+1);
            	 output[index]=0;
            }
        }
    if(output[index]==0){
        return;
    }
    
} 

void printSubsetSumToK(int input[], int size, int k) {
    
    int *output=new int[size];
    
    for(int i=0;i<size;i++){
        output[i]=0;
    }
    
    printSubsetHelper(input,size,k,output,0);
}

