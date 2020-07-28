/*
Max sum without adjacents: GFG
*/
#include <iostream>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin>>T;
	
	for(int i=0;i<T;i++){
	    int N;
	    cin>>N;
	    int *arr=new int[N];
	    for(int j=0;j<N;j++){
	        cin>>arr[j];
	    }
	    
    long long int inclusive=0;
    long long int exclusive=0;
    
    for(int i=0;i<N;i++){
        int temp=inclusive;
        inclusive=std::max(inclusive,arr[i]+exclusive);
        exclusive=temp;
    }
        cout<<inclusive<<"\n";
	}
}
