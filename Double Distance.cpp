#include<bits/stdc++.h>
using namespace std;
#define line cout<<"\n";
#define ll int long long
#define pu push_back
#define ff first
#define ss second
void solve()
{
      int t;
      cin>>t;
      while(t--)
      {
           /* code */
            int tt;
            cin>>tt;
            int vect[tt];
            for(int i=0;i<tt;i++){
                  cin>>vect[i];
            }
            bool tp=true;
            sort(vect,vect+tt);
            int c=1;
            while(c<tt-1)
            {
                  
              int t1=vect[c]-vect[c-1];
              int t2=vect[c+1]-vect[c];
              if(2*t1!=t2 && t1!=2*t2){
                    tp=false;
                    break;
              }
               c++;
            }
            if(tp){
                  cout<<"YES"<<endl;
            }
            else
            {
                  cout<<"No"<<endl;
            }
           
            
            
      }
      
}
int main()
{
       solve();
}
