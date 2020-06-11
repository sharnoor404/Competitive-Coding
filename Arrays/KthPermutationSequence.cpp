/*
Given n and k, return the kth permutation sequence
*/


void swap(int x,int y,vector<int> &num){
    int temp=num[x];
    num[x]=num[y];
    num[y]=temp;
}

void helper(vector<int> &num,int B,int index,int* x,string& ans){
    
    if(index>=num.size()){
        
        *x=*x+1;
       /*cout<<*x<<":";
       for(int i=0;i<num.size();i++){
           cout<<num[i];
       }
       cout<<endl;*/
        if(*x==B){
            
            for(int i=0;i<num.size();i++){
                ans+=to_string(num[i]);
            }
           
        }
        return;
    }
    
    for(int i=index;i<num.size();i++){
        swap(i,index,num);
         helper(num,B,index+1,x,ans);
        swap(i,index,num);
    }

}

string Solution::getPermutation(int A, int B) {
    vector<int> num;
    for(int i=1;i<=A;i++){
        num.push_back(i);
    }
    int count=0;
    string ans="";
    helper(num,B,0,&count,ans);
    return ans;
}

