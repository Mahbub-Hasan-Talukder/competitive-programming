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
bitset<1000001> isprime;
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
    vector<int> pr = eratosthenesSieve(1000001);
    int n,m; 
    set<int>st;
    while(1){
        cin >> n;
        if(n==0)break;
        m = n;
        for(int i=0;i<pr.size() and pr[i]*pr[i]<=n;i++){
            if(n%pr[i]==0){
                st.insert(pr[i]);
                while(n%pr[i]==0)n/=pr[i];
            }
        }
        if(n>1)st.insert(n);
        cout << m << " : " << st.size() << endl;
        st.clear();
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

