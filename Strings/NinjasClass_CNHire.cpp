/* Ninja's Class Round 2 CN Hire Test*/
#include<bits/stdc++.h>
using namespace std;

void helper(int *arr,int N){
    
    cout<<arr[0]<<" ";
    for(int i=1;i<N;i++){
        long long int sum=0;
        for(int j=0;j<=i;j++){
            if((i+1)%(j+1)==0){
                sum=(long long)(sum+arr[j]);
            }
        }
        cout<<sum<<" ";
    }
}

int main(){
    
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        
        int N;
        cin>>N;
        int *arr=new int[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        helper(arr,N);
        cout<<endl;
        delete [] arr;
    }
    
    return 0;
}
