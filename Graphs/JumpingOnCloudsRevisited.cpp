/*
Jumping on clouds revisited: Hackerrank
*/

int jumpingOnClouds(vector<int> c, int k) {
    int energyLevel=100;
for(int i=0;i<c.size();i++){
    energyLevel--;
    i=(i+k)%c.size();
    if(c[i]==1){
        energyLevel-=2;
    }
    if(i==0){
        break;
    }
    i--;
}

return energyLevel;
}
