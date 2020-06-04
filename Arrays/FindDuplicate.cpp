/*
Given an array of integers of size n which contains numbers from 0 to n - 2. Each number is present at least once. That is, if n = 5, numbers from 0 to 3 is present in the given array at least once and one number is present twice. You need to find and return that duplicate number present in the array.
Assume, duplicate number is always present in the array.
*/

int DuplicateNumber(int arr[], int size){
    long long int sum_arr=0;
    
    for(int i=0;i<size;i++){
        sum_arr+=arr[i];
    }
    long long int sum_to_n=(size-2)*(size-1)/2;
    
    return sum_arr-sum_to_n;

}
