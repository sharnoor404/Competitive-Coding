/*
Save Ironman : GFG
*/
#include <iostream>
#include <string>
using namespace std;

bool isValid(char x){
    if((x>='a' && x<='z') || (x>='A' && x<='Z') ||(x>='0' && x<='9')){
        return true;
    }else{
        return false;
    }
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    string s;
	    getline(cin,s);
	    int start=0;
	    int end=s.length()-1;
	    
	    bool flag=true;
	    while(start<end){
	        bool ans1=isValid(s[start]);
	        bool ans2=isValid(s[end]);
	        if(ans1 && ans2){
	            if(tolower(s[start])!=tolower(s[end])){
	                flag=false;
	                //cout<<start<<" "<<end<<endl;
	                //cout<<s[start]<<" "<<s[end]<<endl;
	                break;
	           }else{
	                   start++;
	                   end--; 
	           }
	                
	            }else if(ans1 && !ans2){
	                end--;
	            }else if(!ans1 && ans2){
	                start++;
	            }else{
	                start++;
	                end--;
	            }
	    }
	    if(flag==false){
	        cout<<"NO"<<endl;
	    }else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
