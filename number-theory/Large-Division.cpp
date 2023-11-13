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
    pc(cse++);
    string tmp,s=""; cin >> tmp;
    if(tmp[0]=='-'){
        for(int i=1;i<tmp.size();i++)s+=tmp[i];
    }
    else s = tmp;
    ll n; cin >> n;
    // cout << s << " " << n << endl;
    if(n<0)n *= (-1);
    ll cur = 0;
    ll m;
    for(int i=0;i<s.size();i++){
        cur = (cur*10+(s[i]-'0'))%n;
    }
    if(cur)cout << "not divisible\n";
    else cout << "divisible\n";

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; cin >> t;
    while(t--){
        solve();
    }
}

