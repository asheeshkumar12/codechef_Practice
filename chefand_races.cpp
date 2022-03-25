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
            int x,y,a,b;
            cin>>x>>y>>a>>b;
            int sum=0;
            
            if(x!=a&&x!=b)
              sum++;
            if(y!=a&&y!=b)
             sum++;
            
      
            
         cout<<sum<<endl;
      }
      
}
int main()
{
       solve();
}
