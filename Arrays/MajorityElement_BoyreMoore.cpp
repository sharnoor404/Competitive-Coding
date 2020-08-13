#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int *arr=new int[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    int majority_elem=arr[0];
        int count=1;
	   for(int j=1;j<n;j++){
	      
        if(arr[j]==majority_elem){
            count++;
        }else{
            count--;
        }
         if(count==0){
            majority_elem=arr[j];
            count=1;
        }
	   }
	   
	   int k=0;
	   for(int j=0;j<n;j++){
	       if(arr[j]==majority_elem){
	           k++;
	       }
	   }
	   
	   if(k>n/2){
	       cout<<majority_elem<<endl;
	   }else{
	       cout<<"-1"<<endl;
	   }
	   
	}
	return 0;
}
