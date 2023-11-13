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
ll cnt(ll y){
    return y/4-y/100+y/400;
}
void solve(){
    pc(cse++);
    string smon, emon;
    ll sd, ed, sy, ey;
    char dum;
    cin >> smon >> sd; cin >> dum; cin >> sy;
    cin >> emon >> ed; cin >> dum; cin >> ey;
    if(smon=="January"||smon=="February"){

    }
    else sy++;
    if(emon=="January"||(emon=="February" && ed<29))ey--;
    // cout << sy << " " << ey << "\n";
    cout << cnt(ey)-cnt(sy-1) << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; cin >> t;
    while(t--){
        solve();
    }
}

