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


