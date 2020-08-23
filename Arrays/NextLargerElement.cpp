/*
Next larger element : GFG
*/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int *arr=new long long int[n];
	    stack<long long int> s;
	    vector<long long int > ans(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=n-1;i>=0;i--){
	        while(!s.empty() && arr[i]>=s.top()){
	            s.pop();
	        }
	        
	        if(s.empty()){
	            ans[i]=-1;
	        }else{
	            ans[i]=s.top();
	        }
             s.push(arr[i]);
             
	    }
	    for(int i=0;i<n;i++){
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
