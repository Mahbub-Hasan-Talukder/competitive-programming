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

#define pc(x) cout<<"Case "<<x<<":"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
#define all(x) x.begin(),x.end()
int cse = 1;

void solve(){
    pc(cse++);
    int n,q; cin >> n >> q;
    ll ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    ll br[n];
    ll st = n-1;
    bool f = false;
    for(int i=0;i<n;i++){
        if(!f)br[i] = st;
        else br[i] = (-1)*st;
        if(st-2<0){
            if(n%2==0)br[++i] = (-1)*st;
            f = true;
        }
        if(!f)st-=2;
        else st+=2;
    }
    // for(int i=0;i<n;i++){
    //     cout << br[i] << " ";
    // }
    // cout <<  "\n";
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans += (ar[i]*br[i]);
    }
    cout << "\n";
    while(q--){
        int type; cin >> type;
        if(type==0){
            ll pos, val;
            cin >> pos >> val;
            
            ll prv = ar[pos]*br[pos];
            ar[pos] = val;
            ll cur = ar[pos]*br[pos];

            ans = ans-prv+cur;
            
        }
        else cout << ans << "\n";
    }
    
}
void solve1(){
    int n,q; cin >> n >> q;
    map<int,int>mp;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        
        for(int j=i+1;j<n;j++){
            mp[i]++; mp[j]--;
            ans+=(ar[i]-ar[j]);
        }
        
    }
    cout << ans << "\n";
    for(map<int,int>::iterator it = mp.begin(); it!=mp.end();it++){
        cout << it->first << " " << it->second << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; cin >> t;
    while(t--){
        solve();
        // solve1();
    }
}

