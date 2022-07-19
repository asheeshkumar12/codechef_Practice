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
                if(x+y > a+b){
                    cout<<a+b<<endl;
                }
                else{
                    cout<<x+y<<endl;
                }
            
      }
      
}
int main()
{
       solve();
}
