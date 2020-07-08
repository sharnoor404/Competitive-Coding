/*
Print triangle of numbers
*/

#include <iostream>
using namespace std;

int main() {
    
    int l,i,N,t=0,j,k;
    cin>>N;
    
    for(i=1;i<=N;i++){
       
         for(l=i;l<=N-1;l++){
       cout<<" ";
   }
        for(j=i;j<=i+t;j++){
            cout<<j;
        }
        for(k=j-2;k>=i;k--){
            cout<<k;
        }
        cout<<endl;
  t++;
    }
  
}

