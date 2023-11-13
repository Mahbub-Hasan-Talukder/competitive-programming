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
vector<ll>pr ;
ll n = 1000001;
ll lpf[1000001];

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);   
}

ll sum(vector<ll>& factors){
    ll tot = 0;
    rep(i,0,factors.size())tot+=factors[i];
    return tot;
}
ll numDiv(vector<ll>& factors){
    ll tot = 1;
    rep(i,0,factors.size())tot*=(factors[i]+1);
    return tot;
}
ll sumDiv(vector<ll>& factors,vector<ll>& ind){
    ll tot = 1;
    rep(i,0,factors.size()){
        tot*=(pow(ind[i],(factors[i]+1))-1)/(ind[i]-1);
    }
    return tot;
}

void solve(){
    ll g; cin >> g;
    
    
    map<ll,ll>mp;
    vector<ll>factors,ind;
    while(g>1){
        mp[lpf[g]]++;
        g/=lpf[g];
    }
    mit it;
    for(it=mp.begin(); it!=mp.end(); it++){
        factors.push_back(it->second);
        ind.push_back(it->first);
    }
    cout << ind[0] << " " << ind[ind.size()-1] << " " << factors.size() << " ";
    cout << sum(factors) << " " << numDiv(factors) << " " << sumDiv(factors,ind) << endl;
    
}



int main(){
    ios_base::sync_with_stdio(0);
  cin.tie(0);
    rep(i,0,n)lpf[i] = i+1;
    for(ll i=2;i<=n;i++){
        for(ll j=i;j<=n;j+=i){
            lpf[j] = min(lpf[j],i);
        }
    }
    
    int t=1; cin >> t;
    while(t--){
        solve();
    }
}

