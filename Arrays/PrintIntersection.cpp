/*
Given two random integer arrays, 
print their intersection. 
That is, print all the elements that are present in both the given arrays.
*/

#include<unordered_map>

void intersection(int input1[], int input2[], int size1, int size2) {
   unordered_map<int,int> ourmap;
    for(int i=0;i<size1;i++){
        ourmap[input1[i]]++;
    }
    for(int i=0;i<size2;i++){
        if(ourmap[input2[i]]>0){
            ourmap[input2[i]]--;
            cout<<input2[i]<<endl;
        }
    }

}


