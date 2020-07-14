/*
Viral Advertising: Hackerrank
*/
int viralAdvertising(int n) {
int recipients=5;
int liked_by=0;
while(n>0){
    int dummy=(recipients)/2;
    recipients=dummy*3;
    liked_by+=dummy;
    n--;
}
return liked_by;
}
