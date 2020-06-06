/*Rat in a maze*/

#include<iostream>
using namespace std;

bool has_path(int **arr,int n,int **dummy,int x=0,int y=0){
	if(x==n-1 && y==n-1){
		return true;
		//path found
	}
	if(x>=n || x<0  || y>=n || y<0 || arr[x][y]==0 ||dummy[x][y]==1){
		return false;
	}
	dummy[x][y]=1;
	
	if(has_path(arr,n,dummy,x,y+1)){
		return true;
	}
	if(has_path(arr,n,dummy,x+1,y)){
		return true;
	}
	if(has_path(arr,n,dummy,x-1,y)){
		return true;
	}
	if(has_path(arr,n,dummy,x,y-1)){
		return true;
	}
	
	dummy[x][y]=0;
	
	return false;
}


int main(){
	int n;
	cout<<"Enter maze dimensions"<<endl;
	cin>>n;
	
	int **arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[n];
		for(int j=0;j<n;j++){
			arr[i][j]=0;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	
	int **dummy=new int* [n];
	for(int i=0;i<n;i++)
	{
		dummy[i]=new int[n];
		for(int j=0;j<n;j++){
			dummy[i][j]=0;
		}
	}
	
	cout<<has_path(arr,n,dummy,0,0);
	return 0;
	
}
