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
#define pc(x) cout<<"Case "<<x<<": "
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
ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);   
}
bitset<4000001> isprime;
vector<ll> eratosthenesSieve(ll lim) {
    isprime.set(); isprime[0] = isprime[1] = 0;
    for (ll i = 4; i < lim; i += 2) isprime[i] = 0;
    for (ll i = 3; i*i < lim; i += 2) if (isprime[i])
        for (ll j = i*i; j < lim; j += i*2) isprime[j] = 0;
    vector<ll> pr;
    rep(i,2,lim) if (isprime[i]) pr.push_back(i);
    return pr;
}
void solve(){
    ll n; cin >> n;
    ll k; cin >> k;
    ll g = k;
    rep(i,1,n){
        cin >> k;
        g = gcd(g,k);
    }
    vector<ll>pr ;
    pr = eratosthenesSieve(1000001);
    vector<ll>factors;

    for(int i=0;i<pr.size() and pr[i]*pr[i]<=g;i++){
        int cnt = 0;
        while(g%pr[i]==0){
            cnt++;
            g/=pr[i];
        }
        if(cnt>0)factors.push_back(cnt);
    }
    if(g>1)factors.push_back(1);
    ll ans  = 1;
    rep(i,0,factors.size())ans*=(factors[i]+1);
    cout << ans << endl;
    
}

int main(){
    int t=1; //cin >> t;
    while(t--){
        solve();
    }
}

