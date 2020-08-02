/*
Permutations of first N positive numbers such that prime numbers are at prime indices

Logic: prime indices from 1 to N = the prime numbers from 1 to N
their permutations= K! (if we assume prime numbers to be K
then permutation of remaining number= (N-K)!
Total=(K!)(N-K)!

*/

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int prime_nums(int n){
	int count=0;
	
	vector<int> numbers;
	//initially we assume all numbers to be prime
	for(int i=0;i<=n;i++){
		numbers.push_back(1);
	}
	
	numbers[0]=0;
	numbers[1]=0;
	int limit=pow(n,0.5);
	
	for(int i=2;i<=limit;i++){
		if(numbers[i]==1){
			for(int j=i+1;j<=n;j++){
				if(j%i==0){
					numbers[j]=0;
				}
			}
		}
	}
	
	for(int i=0;i<=n;i++){
		if(numbers[i]==1){
			count++;
		}
	}
	
	return count;
	
}


long long int fact(int x){
	long long int ans=1;
	for(int i=2;i<=x;i++){
		ans=ans*i;
	}
	return ans;
}


void findPermutations(int n){
	
	//calculate prime numbers till N

	int count=prime_nums(n);
	cout<<count<<endl;
	long long int a=fact(count)%1000000007;
	long long int b=fact(n-count)%1000000007;
	long long int c=(a*b)%1000000007;
	cout<<c<<endl;
	
}

int main(){
	int N;
	cin>>N;
	
	findPermutations(N);
}
