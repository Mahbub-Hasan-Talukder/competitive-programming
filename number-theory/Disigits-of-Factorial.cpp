#include<bits/stdc++.h>
using namespace std;
#define pc(x) cout<<"Case "<<x<<": ";
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long
ll mod = LLONG_MAX;

int cse = 1;
double ar[1000001];

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); //freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=2;i<=1000000;i++){
      ar[i]= ar[i-1]+log10(i);
    }
    int t=1; cin >> t;
    while(t--){
        pc(cse++);
        ll n,b; cin >> n >> b;
        cout << (ll)(ar[n]/log10(b)) + 1 << endl;

     }


}
