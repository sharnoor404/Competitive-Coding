/*
To check if the given string has vowels in sorted order or not
*/
#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int currChar=64;
	for(int i=0;i<s.length();i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			if(currChar>s[i]){
				cout<<"unsorted :("<<endl;
				return 0;
			}else{
				currChar=s[i];
			}
		}
	}
	cout<<"sorted!"<<endl;
	return 0;
}
