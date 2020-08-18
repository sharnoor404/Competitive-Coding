/*
Check if strings are rotations of each other or not : GFG
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    if(s1.length() != s2.length()){
	        cout<<"0"<<endl;
	    }else{
	        bool flag=false;
	        for(int i=0;i<s1.length();i++){
	            if(s1[i]==s2[0]){
	                string s1_remaining=s1.substr(i,s1.length()-i);
	                string s2_remaining=s2.substr(0,s1.length()-i);
	                if(s1_remaining==s2_remaining){
	                    s1_remaining=s1.substr(0,i);
	                    s2_remaining=s2.substr(s1.length()-i,s2.length()-s1.length()-i);
	                    if(s1_remaining==s2_remaining){
	                        flag=true;
	                        break;
	                    }
	                    
	                }
	            }
	        }
	        if(flag==true){
	            cout<<"1"<<endl;
	        }else{
	            cout<<"0"<<endl;
	        }
	    }
	}
	return 0;
}
