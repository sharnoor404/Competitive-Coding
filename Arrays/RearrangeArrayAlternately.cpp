/*
Rearrange Array Alternately:
Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively 
i.e first element should be max value,second should be min value, 
third should be second max, fourth should be second min and so on...
No extra space allowed
*/

//Approach 1:
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int N;
	    cin>>N;
	    int *arr=new int[N];
	    for(int j=0;j<N;j++){
	        cin>>arr[j];
	    }
	    for(int j=0;j<N;j=j+2){
	        //save last element;
	        int last_elem=arr[N-1];
	        for(int k=N-2;k>=j;k--){
	            arr[k+1]=arr[k];
	        }
	        arr[j]=last_elem;
	    }
	    
	    for(int j=0;j<N;j++){
	        cout<<arr[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
