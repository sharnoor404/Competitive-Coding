/*
Largest number formed from an array : GFG
*/
#include <iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
    string x=to_string(a);
    string y=to_string(b);
    return x+y>y+x;
}
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
	    sort(arr,arr+n,cmp);
	    for(int j=0;j<n;j++){
	        cout<<arr[j];
	    }
	    cout<<endl;
	}
}
