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
#define yes cout << "Yes\n"
#define no cout << "No\n"
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
    ll a,b; cin >> a >> b;
    if(a%b==0){
        yes; return;
    }
    ll g = gcd(a,b);
    if(g==1){
        no; return;
    }
    while(gcd(b,g)>1){
        b/=gcd(b,g);
    }
    if(b==1)yes;
    else no;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; cin >> t;
    while(t--){
        solve();
    }
}

