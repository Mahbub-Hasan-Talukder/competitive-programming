#include<bits/stdc++.h>
using namespace std;
#define pc(x) cout<<"Case "<<x<<": ";
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long
ll mod = LLONG_MAX;

int cse = 1;
vector<long long>primes;

void sieve(long long n)
{
  long long i,j;
  bitset<101>bt;
  primes.push_back(2);
  for(i=3;i*i<=n;i+=2){
    if(bt[i]==0){
      for(j=i*i;j<=n;j+=(i+i))bt[j]=1;
    }
  }
  for(i=3;i<=n;i+=2){
    if(bt[i]==0)primes.push_back(i);
  }

}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); //freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve(101);
    int t=1; cin >> t;
    while(t--){
        pc(cse++);
        ll n; cin >> n;
        map<ll,ll>mp;
        for(ll k=2;k<=n;k++){
          ll i=0,v = k;
          while(i<primes.size() && primes[i]*primes[i]<=k){
            while(v%primes[i]==0){
              v/=primes[i];
              mp[primes[i]]++;
            }
            i++;
          }
          if(v>1)mp[v]++;
        }
        map<ll,ll>::iterator it;
        int f=0;
        cout << n<<" = ";
        for(it=mp.begin(); it!=mp.end(); it++){
          if(f){
            cout << " * ";
          }
          else f++;
          cout << it->first << " ("<<it->second<<")";
        }
        cout << endl;
     }


}
