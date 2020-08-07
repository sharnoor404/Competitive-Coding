/*
WAP to calculate the inversions of an array.
or calculate how far or close an array is from its sorted format
*/

//Approach 1:
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

//Approach 2: Using merge sort
#include <iostream>
#include<algorithm>
using namespace std;

long long int merge(int *arr,int *temp,long long int start,long long int mid,long long int end){
    long long int Inversions=0;
    long long int i=start;
    long long int j=mid;
    long long int k=start;
    while(i<mid && j<=end){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }else{
            temp[k]=arr[j];
            k++;
            j++;
            Inversions+=(mid-i);
        }
    }
    while(i<mid){
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=end){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=start;i<=end;i++){
        arr[i]=temp[i];
    }
    return Inversions;
}


long long int mergeSort(int *arr,int *temp,long long int start,long long int end){
    long long int count=0;
    if(end>start){
      long long int mid=start+(end-start)/2;
      count+=mergeSort(arr,temp,start,mid);
      count+=mergeSort(arr,temp,mid+1,end);
      count+=merge(arr,temp,start,mid+1,end);
    }
    return count;
}

int main() {

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n;
        cin>>n;
        int *arr=new int[n];
        int *temp=new int[n];
        
        for(long long int j=0;j<n;j++){
           cin>>arr[j];
           temp[j]=0;
        }
        
        long long int count=mergeSort(arr,temp,0,n-1);
        
        cout<<count<<endl;
    }
	return 0;
}
