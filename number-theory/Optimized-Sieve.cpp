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
const int MAX_PR = 100000001;
bitset<MAX_PR> isprime;
vector<int>pr;
void eratosthenesSieve(int lim) {
	isprime.set(); 
    isprime[0] = isprime[1] = 0;
	for (int i = 4; i < lim; i += 2) isprime[i] = 0;
	for (int i = 3; i*i < lim; i += 2) {
        if (isprime[i]){
            for (int j = i*i; j < lim; j += i*2) isprime[j] = 0;
        }
    }
    
	rep(i,2,lim) if (isprime[i]) pr.push_back(i);
}
void solve(){
    eratosthenesSieve(MAX_PR);
    rep(i,0,pr.size())if((i+1)%100==1)cout << pr[i] << " ";
    cout << endl;
}
 
 
int main(){
    int t=1; //cin >> t;
    while(t--){
        solve();
    }
}