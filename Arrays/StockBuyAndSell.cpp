/*
Stock buy and sell : GFG
*/

#include <iostream>
#include<climits>
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
	    
	   int localMinima=-1;
	   int localMaxima=-1;
	   bool flag=false;
	   for(int j=0;j<n;j++){
	       if(localMinima==-1 && (j<n-1 && arr[j]<arr[j+1])){
	           localMinima=j;
	       }
	       if( localMinima!=-1 && localMaxima==-1 && ((j<n-1 && arr[j]>arr[j+1]) || j==n-1)){
	           localMaxima=j;
	           cout<<"("<<localMinima<<" "<<localMaxima<<") ";
	           flag=true;
	           localMinima=-1;
	           localMaxima=-1;
	       }
	       
	   }
	   if(flag==false){
	       cout<<"No Profit";
	   }
	   cout<<endl;
	}
	return 0;
}
