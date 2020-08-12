/*
Element with left side smaller and right side greater : GFG
*/

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
	    
	    int left_max=arr[0];
	    int *min_right_arr=new int[n-1];
	    int min_right=arr[n-1];
	    for(int j=n-2;j>=0;j--){
	        if(arr[j]<min_right){
	            min_right=arr[j];
	        }
	        min_right_arr[j]=min_right;
	    }
	    
	    bool flag=false;
	    for(int j=1;j<n-1;j++){

	        if(arr[j]>=left_max){
	            left_max=arr[j];
	            if(arr[j]<=min_right_arr[j]){
	                cout<<arr[j]<<endl;
	                flag=true;
	                break;
	            }
	        }
	    }
	    if(flag==false){
	        cout<<"-1"<<endl;
	    }
	}
	return 0;
}
