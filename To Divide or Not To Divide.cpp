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
            int a,b,n;
            cin>>a>>b>>n;
            if(a%b==0){
                cout<<-1<<endl;
            }
            else{
                if(n%a==0){
                    int t=n/a;
                    if(n%b==0){
                        t++;
                    }
                    cout<<t*a<<endl;
                }
                else if((n%a)!=0){
                    int p=n/a;
                    p++;
                    if((p*a)%b==0){
                        p++;
                    }
                    cout<<p*a<<endl;
                }
            }
      }
      
}





int main()
{
       solve();
}
