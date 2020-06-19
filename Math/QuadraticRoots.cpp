/*
Given a quadratic equation in the form ax2 + bx + c. Print floor of roots.
*/
void quadraticRoots(int a,int b, int c)
{
   double x=(double)((b*b)-4*a*c);
   if(x<0){
       cout<<"Imaginary";
       return;
   }
   double root1=(double)(-b+pow(x,0.5))/(2.0*a);
   double root2=(double)(-b-pow(x,0.5))/(2.0*a);
   
   if(root1<(int)root1 && root1<0){
       root1--;
   }
   if(root2<(int)root2 && root2<0){
       root2--;
   }
   
   if(root1>root2){
       cout<<(int)root1<<" "<<(int)root2;
   }else{
       cout<<(int)root2<<" "<<(int)root1;
   }
   
}
