/*
Given a binary array, sort it in increasing order in O(N) time and O(1) space complexity.

*/
vector<int> SortBinaryArray(vector<int> binArray)
{
    int NextOne=binArray.size()-1;
    int i=0;
    while(i<NextOne){
        if(binArray[i]==1){
            int temp=binArray[i];
            binArray[i]=binArray[NextOne];
            binArray[NextOne]=temp;
            NextOne--;
        }else{
            i++;
        }
    }
    return binArray;
}

