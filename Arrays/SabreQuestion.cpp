#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int findGreatestPrimeFactor(int num){
	
	if(num==0){
		return 0;
	}else if(num==1){
		return 1;
	}else{
		int max_factor=0;
		int dummy=num;
		
		for(int i=2;i<=sqrt(num);i++){
		 if(dummy%i==0){
		 	while(dummy>1 && dummy%i==0){
				dummy=dummy/i;	
			}
			if(i>max_factor){
				max_factor=i;
			}
		 }
		}
		
		if(dummy==1){
			return max_factor;
		}else{
			return num;
		}
	}
	
}

int main(){
	int N;
	cin>>N;
	
	int* num=new int[N];
	for(int i=0;i<N;i++){
		cin>>num[i];
	}
	
	sort(num,num+N);
	
	int max_num=0;
	for(int i=0;i<N;i++){
		int x = findGreatestPrimeFactor(i);
		if(x>max_num){
			max_num=x;
		}
	}
	delete [] num;
cout<<max_num<<endl;
}
