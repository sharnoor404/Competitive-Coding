/* F7 Championship problem Mock Test CN Hire Test*/
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool comp(int a,int b){
    return a>b;
}

int main() {
	int N;
	cin>>N;
    vector<int> scores;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        scores.push_back(x);
    }
    //sort in descending order
    sort(scores.begin(),scores.end(),comp);
    int count=0;
    int max_uptil_now=0;
    for(int i=0;i<N;i++){
        if((scores[i]+N)>=max_uptil_now){
            max_uptil_now=std::max(max_uptil_now,scores[i]+i+1);
            count++;
        }else{
            break;
        }
    }
    
   cout<<count; 
    
}
