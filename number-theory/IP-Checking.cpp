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
int btd(string s){
    int two = 1;
    int cur = 0;
    for(int i=s.size()-1;i>=0;i--){
        cur += (s[i]-'0')*two;
        two*=2;
    }
    return cur;

}
void solve(){
    pc(cse++);
    string s; cin >> s;
    string t; cin >> t;
    int cur = 0,ten=0;
    string tmp = "";
    s+=".";
    t+=".";
    vector<int>des;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            des.push_back(stoi(tmp));
            tmp = "";
        }
        else tmp+=s[i];
    }
    vector<int>bin;
    tmp = "";
    for(int i=0;i<t.size();i++){
        if(t[i]=='.'){
            bin.push_back(btd(tmp));
            tmp = "";
        }
        else tmp+=t[i];
    }
    for(int i=0;i<des.size();i++){
        if(des[i]!=bin[i])
        {
            cout << "No\n"; return;
        }
    }
    cout << "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1; cin >> t;
    while(t--){
        solve();
    }
}

