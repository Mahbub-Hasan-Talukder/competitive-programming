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
bitset<100000001> isprime;
vector<int> eratosthenesSieve(int lim) {
    isprime.set(); isprime[0] = isprime[1] = 0;
    for (int i = 4; i < lim; i += 2) isprime[i] = 0;
    for (int i = 3; i*i < lim; i += 2) if (isprime[i])
        for (int j = i*i; j < lim; j += i*2) isprime[j] = 0;
    vector<int> pr;
    rep(i,2,lim) if (isprime[i]) pr.push_back(i);
    return pr;
}
void solve(){
    vector<int> pr = eratosthenesSieve(100000001);
    // cout << pr.size();
    vector<pair<int,int> >ans;
    for(int i=1;i<pr.size();i++){
        if(pr[i]-pr[i-1]==2)ans.push_back(make_pair(pr[i-1],pr[i]));
    }
    // cout << ans.size() << endl;
    int n; 
    while(cin>>n){
        cout <<"("<< ans[n-1].first << ", " << ans[n-1].second <<")" << endl;
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

