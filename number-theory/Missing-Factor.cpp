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
bitset<1000001> isprime;
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
    n = sqrtl(n);
    vector<ll> pr = eratosthenesSieve(1000001);
    ll mx = -1;
    for(int i=0;i<pr.size() and pr[i]*pr[i]<=n;i++){
        while(n%pr[i]==0){
            mx = max(pr[i],mx);
            n/=pr[i];
        }
    }
    if(n>1)mx = max(mx,n);
    cout << mx << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; //cin >> t;
    while(t--){
        solve();
    }
}

