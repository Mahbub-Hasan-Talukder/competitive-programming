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
void solve(){
    ll n; cin >> n;
    ll ar[n], mx  = 0;
    for(int i=0;i<n;i++){
        cin >> ar[i]; mx = max(mx,ar[i]);
    }
    ll g = -1;
    for(int i=0;i<n;i++){
        if(ar[i]<mx and g==-1)g = mx-ar[i];
        else if(ar[i]<mx)g = gcd(g,mx-ar[i]);
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans+=(mx-ar[i])/g;
    }
    cout << ans << " " << g << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; //cin >> t;
    while(t--){
        solve();
    }
}

