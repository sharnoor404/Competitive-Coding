/*
Given two strings S1 and S2, 
find and return the minimum number of deletions to be made 
(total count of deletions in both strings) in order to make the strings anagram.
*/
#include<unordered_map>
int makeAnagram(char str1[], char str2[]){
    
     unordered_map<char,int> ourmap;
     int deletionCount=0;
    for(int i=0;str1[i]!='\0';i++){
        ourmap[str1[i]]++;
    }
    for(int j=0;str2[j]!='\0';j++){
        if(ourmap.count(str2[j])>0 && ourmap[str2[j]]>0){
            ourmap[str2[j]]--;
        }else{
            deletionCount++;
        }
        
    }
   
    unordered_map<char,int>:: iterator it=ourmap.begin();
    while(it!=ourmap.end()){
      	deletionCount+=it->second;
        it++;
    }
    return deletionCount;
}

