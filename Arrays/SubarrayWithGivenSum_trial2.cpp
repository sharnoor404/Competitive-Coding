/*
Subrarray with given sum
*/

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    int N,K;
	    cin>>N>>K;
	    int *arr=new int[N];
	    bool flag=false;
	    for(int j=0;j<N;j++){
	        cin>>arr[j];
	    }
	    for(int j=0;j<N;j++){
	        int start=j;
	        int sum=0;
	        while(j<N && sum<K){
	            sum+=arr[j];
	            j++;
	        }
	        if(sum==K){
	            cout<<start+1<<" "<<j<<endl;
	            flag=true;
	            break;
	        }else{
	            j=start;
	        }
	    }
	    if(flag==false)
	        cout<<"-1"<<endl;
	}
	return 0;
}
