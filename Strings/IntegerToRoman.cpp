/*
Convert the given integer number to roman number
*/
string Solution::intToRoman(int A) {
    
    string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string hundreds[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string thousands[]={"","M","MM","MMM"};
    
    string ans="";
    ans=thousands[A/1000]+hundreds[(A%1000)/100]+tens[(A%100)/10]+ones[A%10];
    return ans;
}

