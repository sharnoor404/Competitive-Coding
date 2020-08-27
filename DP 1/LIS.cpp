/*
LIS : CN
*/

using namespace std;

 int lis(int arr[], int n) {
		
	int *LIS_till_i=new int[n];
     LIS_till_i[0]=1;
     for(int i=1;i<n;i++){
         
         int j=i;
         int max=0;
         while(j>=0){
             if(arr[i]>arr[j] && (LIS_till_i[j])>max){
                 max=(LIS_till_i[j]);
             }
             j--;
         }
         LIS_till_i[i]=max+1;
     }
     int max=0;
     for(int i=0;i<n;i++){
         //cout<<LIS_till_i[i]<<" ";
         if(LIS_till_i[i]>max){
             max=LIS_till_i[i];
         }
     }
    // cout<<endl;
     return max;
 }
