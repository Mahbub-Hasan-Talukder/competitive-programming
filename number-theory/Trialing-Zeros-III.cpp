#include<bits/stdc++.h>
using namespace std;
#define pc(x) cout<<"Case "<<x<<": ";
#define rep(y,x) for(int y=0;y<x;y++)
#define f first
#define sc second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
#define pll pair<ll,ll>
#define inf 1000000009
#define N 5000001
int cse = 1;

ll chk(ll n){
  ll ans=0,k=5;
  while(k<=n)
  {
    ans+=n/k; k*=5;
  }
  return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); //freopen("output.txt", "w", stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    int t=1; cin >> t;
    while(t--){
      pc(cse++);
      int q; cin >> q;
      ll hi = (ll)10e18, lo = 0, mid;
      while(hi>lo){
        mid = (hi+lo)/2;
        // cout << mid<< " "<<chk(mid)<< endl;
        if(chk(mid)==q){
          cout << (mid/5)*5 << endl; goto end;
        }
        else if(chk(mid)>q)hi = mid-1;
        else lo = mid+1;
      }
      cout << "impossible\n";
      end:;
    }
}
/*

*/