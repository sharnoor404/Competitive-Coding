/*
Edit Distance : CN
*/
#include<iostream>
#include<cstring>
using namespace std;

int editDistance(string s1, string s2){

 int **dp=new int*[s1.length()+1];
    
    for(int i=0;i<=s1.length();i++){
        dp[i]=new int[s2.length()+1];
    }
    
    for(int i=0;i<=s1.length();i++){
        dp[i][0]=i;
    }
    
    for(int j=0;j<=s2.length();j++){
        dp[0][j]=j;
    }

    for(int i=1;i<=s1.length();i++){
        for(int j=1;j<=s2.length();j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }else{
                dp[i][j]=1+std::min(dp[i-1][j-1],std::min(dp[i-1][j],dp[i][j-1]));
            }
        }
    }
    
    int ans=dp[s1.length()][s2.length()];
    for(int i=0;i<=s1.length();i++){
        delete [] dp[i];
    }
    delete[] dp;
    return ans;
}

