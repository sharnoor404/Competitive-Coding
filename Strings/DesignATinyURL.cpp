/*
Design a tiny URL or URL shortener : GFG
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string convertToShortUrl(long long int id){
    string ans="";
    string map="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    while(id){
        ans+=map[id%62];
        id=id/62;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

long long int backToId(string shortenedURL){
    long long int id=0;
    for(int i=0;i<shortenedURL.length();i++){
        if(shortenedURL[i]>='a' && shortenedURL[i]<='z'){
            id=(long long)(id*62+shortenedURL[i]-'a');
        }else if(shortenedURL[i]>='A' && shortenedURL[i]<='Z'){
            id=(long long)(id*62+shortenedURL[i]-'A' + 26);
        }else if(shortenedURL[i]>='0' && shortenedURL[i]<='9'){
            id=(long long)(id*62+shortenedURL[i]-'0' + 52);
        }
    }
    return id;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int id;
	    cin>>id;
	    string shortenedURL=convertToShortUrl(id);
	    cout<<shortenedURL<<endl;
	    long long int newId=backToId(shortenedURL);
	    cout<<newId<<endl;
	}
	return 0;
}
