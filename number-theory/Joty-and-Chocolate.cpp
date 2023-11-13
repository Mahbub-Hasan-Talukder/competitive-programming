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
ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}
void solve(){
    ll n,a,b,p,q; cin >> n >> a >> b >> p >> q;
    
    ll ans1 = (n/a)*p + (n/b)*q - (n/lcm(a,b))*q ;
    ll ans2 = (n/b)*q + (n/a)*p - (n/lcm(a,b))*p ;

    cout << max(ans1,ans2) << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;// cin >> t;
    while(t--){
        solve();
    }
}

