/* Closed box problem CN Hire Mock Test 
Given N print pattern as follows:

	if n=4
	####
	*  *
	*  *
	####
*/

#include<bits/stdc++.h>
using namespace std;
int main() {

	int N;
    cin>>N;
    
    for(int i=0;i<N;i++){
        cout<<'#';
    }
    cout<<endl;
    
    for(int i=0;i<N-2;i++){
        cout<<'*';
        for(int j=1;j<N-1;j++){
            cout<<" ";
        }
        cout<<'*';
        cout<<endl;
    }
    
    
    for(int i=0;i<N;i++){
        cout<<'#';
    }
    
    return 0;
    
}
