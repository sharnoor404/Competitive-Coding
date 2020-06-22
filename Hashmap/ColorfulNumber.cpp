/*
For Given Number N find if its COLORFUL number or not
A number is said to be colorful if product of every digit of a contiguous subsequence is different. 
*/
int Solution::colorful(int A) {
    vector<int> num;
    while(A>0){
        num.push_back(A%10);
        A=A/10;
    }
    unordered_map<long int,bool> ourmap;
    for(int i=num.size()-1;i>=0;i--){
        long int product=1;
        for(int j=i;j>=0;j--){
            product=product*num[j];
            if(ourmap.count(product)!=0){
                return 0;
            }else{
                ourmap[product]=true;
            }
        }
    }
    return 1;
}

