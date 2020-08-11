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
	    if(n==1){
	        cout<<arr[0]<<endl;
	        continue;
	    }
	    int curr=0;
	    int next=1;
	    for(int j=0;j<n-1;j++){
	        if(arr[curr]<arr[next]){
	            if(j%2==1){
	                //swap
	                int temp=arr[curr];
	                arr[curr]=arr[next];
	                arr[next]=temp;
	            }
	            
	        }else{
	            if(j%2==0){
	              //swap
	                int temp=arr[curr];
	                arr[curr]=arr[next];
	                arr[next]=temp;  
	            }
	        }
	        curr++;
	        next++;
	    }
	    for(int j=0;j<n;j++){
	        cout<<arr[j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
