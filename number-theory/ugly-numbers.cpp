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
vector<ll>five,two,three;
void solve(){
    set<ll>st;
    ll lmt = 10, cnt = 0;
    st.insert(1);
    while(cnt<1500){
        ll top = *st.begin();
        cnt++;
        if(cnt==1500){
            cout << "The 1500'th ugly number is "<< top <<"." << endl; break;
        }
        st.erase(st.begin());
        
        st.insert(top*2);
        st.insert(top*3);
        st.insert(top*5);
    }
    

}

int main(){
    int t=1; //cin >> t;
    while(t--){
        solve();
    }
}

