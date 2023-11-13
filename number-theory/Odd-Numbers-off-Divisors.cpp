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

const int N = 1e6+9;
ll spf[N];
void SPF(){// find prime factorization of n <= 1e6
    for (ll i = 2; i < N; i++) {
        spf[i] = i;
    }
    for (ll i = 2; i < N; i++) {
        for (ll j = i; j < N; j += i) {
            spf[j] = min(spf[j], i);
        }
    }
}
vector<ll> getFactors(ll n){
    vector<ll> factors;
    while (n > 1) {
        factors.push_back(spf[n]);
        n /= spf[n];
    }
    return factors;
}

void solve(){
    
    SPF();
    int M = 100001;
    vector<ll>numFacs[M];
    for(ll i=1;i<M;i++){
        vector<ll>facs = getFactors(i);
        map<ll,ll>mp;

        for(ll i=0;i<facs.size();i++){
            mp[facs[i]]++;
        }

        map<ll,ll>:: iterator it;
        ll cnt = 1;
        for(it=mp.begin();it!=mp.end();it++){
            cnt*=(2*it->second+1);
        }
        numFacs[cnt].push_back(i*i);
        // cout << i*i << " " << cnt << endl;
    }
    ll q; cin >> q;
    while(q--){
        ll k,l,r; cin >> k >> l >> r;
        cout << upper_bound(numFacs[k].begin(),numFacs[k].end(),r)
                -lower_bound(numFacs[k].begin(),numFacs[k].end(),l) << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; //cin >> t;
    while(t--){
        solve();
    }
}

