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
            int x,y,n,r;
            cin>>x>>y>>n>>r;
            if((r/y)>=n){
                cout<<0<<" "<<n<<endl;            
                
            }
            else if((r/x)<n){
                cout<<-1<<endl;
            }
            //int sb=0,pb=0;
           else
           {
               int t=y*n;
               int w=(x-y);
               int m=(r-t)/w;
               if((r-(t))%(w)!=0){
                  m=m+1;
               }
              
                   cout<<m<<" "<<n-m<<endl;
               
           }
          
      }
      
      
}
int main()
{
       solve();
}
