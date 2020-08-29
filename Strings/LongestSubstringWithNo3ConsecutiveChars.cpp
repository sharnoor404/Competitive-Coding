/*
Longest substring such that no three consecutive characters are the same : GFG
*/
#include <iostream>
using namespace std;
void compute(string s){
	if(s.length()<3){
		cout<<s;
		return;
	}
	int startIndex=0;
	int endIndex=2;
	int temp=2;
	//since min length would be 2
	int ans=2;
	
	for(int i=2;i<s.length();i++){
		if(s[i]!=s[i-1] || s[i]!=s[i-2]){
			temp++;
		}else{
			//3 consecutive found
			//reset temp length=2 (last 2 repetitve chars included)
			ans=std::max(ans,temp);
			startIndex=i-ans;
			endIndex=i;
			temp=2;
		}
	}
	
	for(int i=startIndex;i<endIndex;i++){
		cout<<s[i];
	}
	cout<<endl;
}

int main(){
	string s;
	cin>>s;
	
	compute(s);
}
