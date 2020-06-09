/*
Given 2 char arrays, check if the two are permutations of each other.
*/

#include<unordered_map>
bool isPermutation(char input1[], char input2[]) {
	unordered_map<char,int> ourmap;
    for(int i=0;input1[i]!='\0';i++){
        ourmap[input1[i]]++;
    }
    for(int j=0;input2[j]!='\0';j++){
        ourmap[input2[j]]--;
    }
    unordered_map<char,int>::iterator it=ourmap.begin();
    while(it!=ourmap.end()){
        if(it->second!=0){
            return false;
        }
        it++;
    }
    return true;
}

