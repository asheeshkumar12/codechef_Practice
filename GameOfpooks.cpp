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
            int n;
            cin>>n; //First check if x+y<=z if yes print 2 
                    //else check if x<=z if yes print 1 else 0
            if(n==1)
            {
                  cout<<1<<endl;
            }
            else if(n>=2 && n<4){
                  cout<<n-1<<endl;
            }
            else{
                  cout<<n<<endl;
            }
            
      }
      
}
int main()
{
       solve();
}
