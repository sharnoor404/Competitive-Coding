/*
Given a number n, print numbers from 1 to n in dictionary(lexicographical) order.
*/

#include <iostream>
using namespace std;

void lexicographicalOrder(int num,long long int ans=0,int flag=0){
    
    if(ans>num){
        return;
    }
	
	for(int i=0;i<10;i++){
        if(flag==0 && i==0){
            continue;
        }
        else{
            if(ans*10+i<=num){
            cout<<ans*10+i<<endl;
            lexicographicalOrder(num,(ans*10)+i,1);
        }
        
    }
}
}
