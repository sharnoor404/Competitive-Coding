/*
Given 2 arrays X and Y.
Count pairs such that x^y > y^x.
*/
#include <iostream>
#include<algorithm>
using namespace std;

int helper(int X,int* count_of_Y,int *Y,int m){
    if(X==0){
        return 0;
    }
    if(X==1){
        return count_of_Y[0];
    }
    
    //cout<<upper_bound(Y,Y+m,X)<<endl;
    int ans=(Y+m)-upper_bound(Y,Y+m,X);
    
    ans+=count_of_Y[0]+count_of_Y[1];
    if(X==2){
        ans-=count_of_Y[3]+count_of_Y[4];
        return ans;
    }
    
    if(X==3){
        ans+=count_of_Y[2];
    }
    return ans;
}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    long long int n,m;
	    cin>>n>>m;
	    int *X=new int[n];
	    int *Y=new int[m];
	    for(long long int j=0;j<n;j++){
	        cin>>X[j];
	    }
	    int count_of_Y[5]={0};
	    for(long long int j=0;j<m;j++){
	        cin>>Y[j];
	        if(Y[j]<5){
	            count_of_Y[Y[j]]++; 
	        }
	    }
	    
	    sort(Y,Y+m);
	    long long int count=0;
	    for(int j=0;j<n;j++){
	        count+=helper(X[j],count_of_Y,Y,m);
	    }
	    cout<<count<<endl;
	}
	return 0;
}
