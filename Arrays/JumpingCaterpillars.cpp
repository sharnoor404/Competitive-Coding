/*
Jumping Caterpillars Problem : GFG
*/

#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    int k;
	    cin>>n>>k;
	    int *arr=new int[k];
	    vector<int> dummy(n+1,0);
	  
	    for(int j=0;j<k;j++){
	        cin>>arr[j];
	    }
	    
	    for(int j=0;j<k;j++){
	        //if(arr[j]<=n && arr[j]>=0 && dummy[arr[j]]==0)
	        for(int a=1;a*arr[j]<=n;a++){
	                dummy[a*arr[j]]=1;
	        }
	    }
	    
	    int count=0;
	    for(int j=1;j<=n;j++){
	        if(dummy[j]==0){
	            count++;
	        }
	    }
	   cout<<count<<endl;
	}
	return 0;
}
