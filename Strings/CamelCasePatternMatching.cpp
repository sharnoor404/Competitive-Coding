/*
Camel case pattern matching : GFG
*/
#include<bits/stdc++.h>
using namespace std;
bool check(string a,string b)
{
   int m=b.size();
   int i;
   for(i=0;i<m;i++)
   if(a[i]!=b[i])
   return false;
   return true;
}
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,t=0;
        cin>>n;
     multimap<string,string>m;
  
      string s,temp,pattern;
      vector<string>v(n);
      for(i=0;i<n;i++)
      cin>>v[i];
      cin>>pattern;
      for(i=0;i<n;i++)
      {
          for(j=0;j<v[i].size();j++)
          if(v[i][j]>=65 && v[i][j]<=90)
          temp.push_back(v[i][j]);
          //cout<<temp<<" "<<pattern<<endl;
           if(check(temp,pattern)==true)
             m.insert(pair<string,string>(temp,v[i]));
             temp.clear();
      }
      if(m.size()==0)
        {
            cout<<"No match found";
        }
      for(auto itr=m.begin();itr!=m.end();itr++)
            cout<<itr->second<<" ";
            cout<<endl;
    }
	return 0;
 }
