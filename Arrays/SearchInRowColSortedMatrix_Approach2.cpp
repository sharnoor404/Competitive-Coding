/*
Search in a row wise and column wise sorted matrix : GFG
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int **arr=new int*[m+1];
	    for(int i=1;i<=m;i++){
	        arr[i]=new int[n+1];
	        for(int j=1;j<=n;j++){
	            cin>>arr[i][j];
	        }
	    }
	    
	    int x;
	    cin>>x;
	    int i=1,j=n;
	    bool flag=false;
	    
	    while(i>0 && i<=m && j>0 && j<=n){
	        if(arr[i][j]==x){
	            flag=true;
	            break;
	        }
	        if(arr[i][j]>x){
	            j--;
	        }else{
	            i++;
	        }
	    }
	    
	    if(flag){
	        cout<<"1"<<endl;
	    }else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
