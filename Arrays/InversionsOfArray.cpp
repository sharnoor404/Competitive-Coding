/*WAP to calculate the inversions of an array.
or calculate how far or close an array is from its sorted formst
*/
#include <iostream>
#include<algorithm>
using namespace std;

int main() {

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n;
        cin>>n;
        long long int *arr=new long long int[n];
        for(int j=0;j<n;j++){
           cin>>arr[j];
        }
        long long int count=0;
        
        for(long long int j=0;j<n;j++){
            for(long long int k=j+1;k<n;k++){
                if(arr[j]>arr[k]){
                    count++;
                }
            }
        }
        
        cout<<count<<endl;
    }
	return 0;
}
