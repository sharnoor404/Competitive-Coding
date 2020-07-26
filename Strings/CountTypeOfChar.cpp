#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    string s;
	    cin>>s;
	    
	   int countUpper=0;
	   int countLower=0;
	   int countNumber=0;
	   int countSplChar=0;
	    
	    for(int j=0;j<s.length();j++){
	        if(s[j]>='A' && s[j]<='Z'){
	            countUpper++;
	        }else if(s[j]>='a' && s[j]<='z'){
	            countLower++;
	        }else if(s[j]>='0' && s[j]<='9'){
	            countNumber++;
	        }else{
	            countSplChar++;
	        }
	    }
	    cout<<countUpper<<endl<<countLower<<endl<<countNumber<<endl<<countSplChar<<endl;
	    
	}
}
