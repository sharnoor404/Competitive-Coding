/*
Check instance of a puzzle is solvable or  not.
*/

#include<iostream>
using namespace std;

int findRow(int **puzzle,int N){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(puzzle[i][j]==0){
				return N-i;
			}
		}
	}
}

int count_inversions(int *puzzle,int N){
	
	int count=0;
	
	for(int i=0;i<N*N;i++){
		for(int j=i+1;j<N*N;j++){
			if(puzzle[j]!=0 && puzzle[i]!=0 && puzzle[i]>puzzle[j]){
				count++;
			}
		}
	}
	
	return count;
}

bool isSolvable(int** puzzle, int N){
	
	int inversions=count_inversions((int*)puzzle,N);
	int row_of_X=findRow(puzzle,N);
	
	if(N%2==1 && inversions%2==0){
		return true;
	}else if(N%2==0){
		if(inversions%2==0 && row_of_X%2==1){
			return true;
		}
		else if(inversions%2==1 && row_of_X%2==0){
			return true;
		}
	}
	
	return false;
	
} 

int main(){
	int N;
	cout<<"Enter puzzle size"<<endl;
	cin>>N;
	
	int** puzzle=new int* [N];
	
	for(int i=0;i<N;i++){
		puzzle[i]=new int[N];
		for(int j=0;j<N;j++){
			cin>>puzzle[i][j];
		}
	}
	
	if(isSolvable(puzzle,N)){
		cout<<"Yes! Solvable.";
	}else{
		cout<<"Not Solvable :(";
	}
	
	return 0;
}

