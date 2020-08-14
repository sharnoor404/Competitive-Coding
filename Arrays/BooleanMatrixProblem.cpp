/*
Boolean Matrix Problem : GFG
*/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
 
    for(int i=0;i<t;i++){
        //cout<<"loop works"<<endl;
        int m,n;
        cin>>m>>n;
        int **arr=new int*[m];
        for(int j=0;j<m;j++){
            arr[j]=new int[n];
            for(int k=0;k<n;k++){
                cin>>arr[j][k];
            }
        }
   
        int first_col=-1;
        int first_row=-1;
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                if(arr[j][k]==1){
                    //make ith row=0;
                    //make jth col=0;
                    if(j==0){
                        first_row=0;
                    }
                    if(k==0){
                        first_col=0;
                    }
                    if(j!=0 && k!=0){
                        arr[j][0]=1;
                        arr[0][k]=1;
                    }
                }
            }
        }
    
        for(int j=1;j<m;j++){
            if(arr[j][0]==1){
                for(int k=1;k<n;k++){
                    arr[j][k]=1;
                }
            }
        }
        
        for(int j=1;j<n;j++){
            if(arr[0][j]==1){
                for(int k=1;k<m;k++){
                    arr[k][j]=1;
                }
            }
        }
        if(first_row==0){
            for(int j=0;j<n;j++){
                arr[0][j]=1;
            }
        }
        if(first_col==0){
            for(int j=0;j<m;j++){
                arr[j][0]=1;
            }
        }
        
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                cout<<arr[j][k]<<" ";
            }
            cout<<endl;
        }
        
    }
	return 0;
}
