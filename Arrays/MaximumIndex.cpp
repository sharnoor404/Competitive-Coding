/*
Maximum Index Problem : GFG
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
	  
	    int max_gap=0;
	    for(int j=0;j<n-max_gap;j++){
	        for(int k=n-1;k>j+max_gap;k--){
	            if(arr[k]>=arr[j] && (k-j)>max_gap){
	                max_gap=k-j;
	            }
	        }
	    }
	    cout<<max_gap<<endl;
	}

}
