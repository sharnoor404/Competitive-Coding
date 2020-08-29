/*
Alpha code : CN
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    while(cin>>x && x!="0"){
        int *arr=new int[x.length()+1];
        arr[0]=1;
        arr[1]=1;
        for(int i=2;i<=x.length();i++){
            arr[i]=0;
            if(x[i-1]!='0'){
                arr[i]=arr[i-1];
            }
            if((x[i-2]-'0')*10+(x[i-1]-'0')<=26 && (x[i-2]-'0')*10+(x[i-1]-'0')>=10){
                arr[i]=(arr[i]+arr[i-2])%1000000007;
            }
        }
        int ans=arr[x.length()]%1000000007;
        cout<<ans<<endl;
        delete[] arr;
    }
}

