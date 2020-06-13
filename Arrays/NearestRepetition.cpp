/*
Given an integer array, find and return the minimum distance between indexes of an element and its repetition.
*/
#include <cmath>
#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#include<climits>
using namespace std;

int minDistance(int arr[],int n){
    int min=INT_MAX;
	unordered_map<int,int> ourmap;
    for(int i=0;i<n;i++){
        
        if(ourmap.count(arr[i])>0 && (i-ourmap[arr[i]])<min){
            min=i-ourmap[arr[i]];
        }
        ourmap[arr[i]]=i;
    }
    return min;
}

