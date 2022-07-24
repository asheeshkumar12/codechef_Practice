#include<bits/stdc++.h>
using namespace std;
#define line cout<<"\n";
#define ll  long long
#define pu push_back
#define ff first
#define ss second
void solve()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n;
            cin>>n;
            int p[n];
            ll ans=0,c=0;
            for(int i=0;i<n;i++){
                cin>>p[i];
                if(p[i]==1) c++;
                else{
                    ans+=(c*(c+1)/2);
                    c=0;
                }
            }
            ans+=(c*(c+1)/2);
            cout<<ans<<endl;
            
      }
      
}
int main()
{
       solve();
}
