/*
Factorial of a large number
*/

#include <iostream>
#include<vector>
using namespace std;

void multiply(vector<int> &factorial,int mul){
    int carry=0;
    for(int i=0;i<factorial.size();i++){
        int val=factorial[i]*mul + carry;
        factorial[i]=val%10;
        carry=val/10;
    }
    while(carry>0){
        factorial.push_back(carry%10);
        carry=carry/10;
    }
}

void find_factorial(int N){
    vector<int> factorial;
	factorial.push_back(1);
	for(int i=2;i<=N;i++){
	    multiply(factorial,i);
	}
	
	for(int i=factorial.size()-1;i>=0;i--){
	    cout<<factorial[i];
	} 
	cout<<endl;
}

int main() {
	int T,N;
	cin>>T;

for(int i=0;i<T;i++){
     cin>>N;
    find_factorial(N);
}
   
}
