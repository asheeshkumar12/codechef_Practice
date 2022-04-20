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
            ll k,n;
            cin>>n>>k;
            if(k==0){
                  if(n%4==0){
                  cout<<"Off"<<endl;
                  }
                  else{
                        cout<<"On"<<endl;
                  }
            }
            else if(k==1&& n==0){
      
                        cout<<"On"<<endl;
                  }
            else if(k==1&& n%4==0){
                  cout<<"on"<<endl;
            }
                  
            
            
            else{
                  cout<<"Ambiguous"<<endl;
            }
      }
      
}
int main()
{
       solve();
}
