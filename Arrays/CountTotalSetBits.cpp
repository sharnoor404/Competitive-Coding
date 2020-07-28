/*
Given a number N, Find the total count of set bits for all numbers from 1 to N.
*/
#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int N;
        cin>>N;
        int total_count=0;
        for(int i=1;i<=N;i++){
            int count=0;
            int x=i;
            while(x!=0){
                x=x&(x-1);
                count++;
            }
            total_count+=count;
        }
        cout<<total_count<<"\n";
    }
}
