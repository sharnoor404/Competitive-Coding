/*
Given an array print all values that are equal to their index values, indexing is 1 based
*/
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    int N;
	    cin>>N;
	    int counter=1;
	    bool flag=false;
	    for(int j=0;j<N;j++){
	        int temp;
	        cin>>temp;
	        if(temp==counter){
	            flag=true;
	            cout<<counter<<" ";
	        }
	        counter++;
	    }
	    if(flag==false){
	        cout<<"Not Found";
	    }
	    cout<<"\n";
	}
}
