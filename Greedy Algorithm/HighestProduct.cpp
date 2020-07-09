/*
Given an array A with N integers,
Return the highest product possible by multiplying 3 numbers from the array.
*/
int Solution::maxp3(vector<int> &A) {
    if(A.size()<3){
        return 0;
    }
    sort(A.begin(),A.end());
    int product_with_negative_num=A[0]*A[1]*A[A.size()-1];
    int product_with_positive_num=A[A.size()-3]*A[A.size()-2]*A[A.size()-1];
    return std::max(product_with_negative_num,product_with_positive_num);
}

