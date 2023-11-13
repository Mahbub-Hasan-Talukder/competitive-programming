#include<bits/stdc++.h>
using namespace std;
#define pc(x) cout<<"Case "<<x<<": ";
#define rep(y,x) for(int y=0;y<x;y++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ll long long
#define pll pair<ll,ll>
#define inf 1000000009
#define N 5000001
int cse = 1;
vector<long long>primes;
bitset<10000001>bt;
void sieve(long long n)
{
  bt[0] = bt[1] = 1;
  long long i,j;
  
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
    
    sieve(10000001);
    int t=1; cin >> t;
    while(t--){
      pc(cse++);
      ll ans = 0;
      ll n; cin >> n;
      for(int i=0;i<primes.size();i++){
        // cout << primes[i] << endl;

        if(primes[i]>n)break;
        if(!bt[n-primes[i]]){
          if((n-primes[i])%2==1||(n-primes[i])==2)ans++;
        }

      }
      cout << (ans+1)/2 << endl;
    }
}
/*

*/