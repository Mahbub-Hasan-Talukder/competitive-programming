#include<bits/stdc++.h>
using namespace std;
#define pc(x) cout<<"Case "<<x<<": ";
#define rep(y,x) for(int y=0;y<x;y++)
#define f first
#define sc second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
#define pll pair<ll,ll>
#define inf 1000000009
#define N 5000001

int phi[N];
unsigned long long pre[N];
bool vis[N];
int cse = 1;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); //freopen("output.txt", "w", stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    rep(i,N)phi[i] = i;
      

    for (int i = 0; i < N; i++)phi[i] = i;

    for (int i = 2; i < N; i++) {
        if (phi[i] == i) {
            for (int j = i; j < N; j += i)
                phi[j] -= phi[j] / i;
        }
    }

    for(int i=2;i<N;i++){
      pre[i]= ((unsigned long long)phi[i]* (unsigned long long)phi[i])+pre[i-1];;
    }
    int t=1; cin >> t;
    while(t--){
      ll a,b; cin >> a>> b;
      ll ans = 0;
      pc(cse++);
      cout << pre[b]-pre[a-1] << endl;
    }
}
/*

*/