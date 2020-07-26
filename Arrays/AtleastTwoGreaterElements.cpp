/*
Given an array, return all elements in a sorted fashion except the greatest 2 numbers
*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int N;
	    cin>>N;
	    vector<int> x;
	    for(int j=0;j<N;j++){
	        int temp;
	        cin>>temp;
	        x.push_back(temp);
	    }
	    
	    sort(x.begin(),x.end());
	    for(int j=0;j<x.size()-2;j++){
	        cout<<x[j]<<" ";
	    }
	    cout<<endl;
	}
}
