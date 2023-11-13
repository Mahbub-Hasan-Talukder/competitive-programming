#include<bits/stdc++.h>
using namespace std;
#define pc(x) cout<<"Case "<<x<<": ";
#define rep(y,x) for(int y=0;y<x;y++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll unsigned long long
#define pll pair<ll,ll>
#define inf 1000000009
#define N 1000001
int cse = 1;

int main(){    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
      ll a,b; cin >> a >> b;
      pc(cse++);
      if(a-b<=b)cout << "impossible\n";
      else{
        ll dif = a-b;
        std::vector<ll> v;
        for(ll i=1;i*i<=dif;i++){
          if(dif%i==0){
            if(i>b)v.push_back(i);
            if(dif/i>b&&dif/i!=i)v.push_back(dif/i);
          }
        }
        sort(v.begin(),v.end());
        rep(i,v.size())cout << v[i] << " ";
        cout << endl;
      }
    }
    
}
