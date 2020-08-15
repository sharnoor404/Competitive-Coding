/*
Check if string is rotated by 2 places : GFG
*/
#include <iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string a;
        string b;
        cin>>a;
        cin>>b;
        string x=b.substr(2,b.size()-2) + b.substr(0,2);
        string y=b.substr(b.size()-2,2) + b.substr(0,b.size()-2);

        if(a==x || a==y){
            cout<<"1"<<endl;
        }else{
            cout<<"0"<<endl;
        }
    }
	return 0;
}
