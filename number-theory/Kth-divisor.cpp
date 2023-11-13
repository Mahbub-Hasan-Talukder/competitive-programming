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

void solve(){
    ll n,k; cin >> n >> k;
    vector<ll>v;
    
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i!=n/i)v.push_back(n/i);
        }

    }
    sort(all(v));

    if(k>v.size())cout << -1 << endl;
    else cout << v[k-1] << endl;
}

int main(){
   solve();
}

