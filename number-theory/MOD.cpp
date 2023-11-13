#include <algorithm>
#include <climits>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <vector>
using namespace std;
#define pc(x) cout<<"Case "<<x<<":\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
#define P make_pair
#define pll pair<ll,ll>
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(x) x.begin(),x.end()
#define mit map<ll,ll>::iterator
#define sit set<ll>::iterator
#define endl "\n"
int cse = 1;
ll mulMod(ll a, ll b, ll mod) 
{ 
    ll res = 0;
    a %= mod; 
    while (b) { 
        if (b & 1) 
            res = (res + a) % mod; 
        a = (2 * a) % mod; 
        b >>= 1;
    } 
    return res; 
} 
ll pw(ll a, ll b, ll mod) {
  if (b == 0)return 1;
  if (b % 2 == 0)return pw(mulMod(a,a,mod), b / 2, mod);
  return mulMod(a,pw(mulMod(a,a,mod), (b - 1) / 2, mod),mod);
  
}
void solve(){
    ll a,b,mod;
    cin >> a >> b >> mod;
    cout << pw(a,b,mod)%mod << endl;
    cout << mulMod(a,b,mod) << endl;
    cout << mulMod(a,pw(b,mod-2,mod),mod) << endl;

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; //cin >> t;
    while(t--){
        solve();
    }
}

