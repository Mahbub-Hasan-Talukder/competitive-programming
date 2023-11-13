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
  bitset<1000001>bt;
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
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve(1000000);
    // cout << primes.size() << endl;
    int t=1; cin >> t;
    while(t--){
        pc(cse++);
        ll n; cin >> n;
        map<ll,ll>mp;
        int i=0;
        while(i<78498 && primes[i]*primes[i]<=n){
          while(n%primes[i]==0){
            n/=primes[i];
            mp[primes[i]]++;
          }
          i++;
        }
        if(n>1)mp[n]++;
        map<ll,ll>::iterator it;
        ll ans = 1;
        for(it=mp.begin(); it!=mp.end(); it++){
          ans*=(it->second+1);
        }
        cout << ans-1 << endl;
     }

}
