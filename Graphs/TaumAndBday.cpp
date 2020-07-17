/*
Taum and Bday Problem -HR
*/

long taumBday(int b, int w, int bc, int wc, int z) {
    long int ans=0;
if(abs(bc-wc)<=z){
    ans=(long)((long)b*bc +(long)w*wc);
}else{
    if(bc>wc){
        ans=(long)((long)b*(wc+z) +(long)w*wc);
    }else{
        ans=(long)((long)b*(bc) +(long)w*(bc+z));
    }
}
return ans;
}

