#include <iostream>
using namespace std;

typedef unsigned long long int ull;

const ull MOD = 1000000007;

ull pow(ull a, ull b){
  if(b == 0)
    return 1;
  if(b == 1)
    return a;
  ull t = pow(a, b / 2);
  t = t * t % MOD;
  return t * pow(a, b % 2) % MOD;
}

ull inverse(ull a){
  return pow(a, MOD - 2);
}

ull sum_powers(ull x, ull n){
  return pow(x, n + 1) * inverse(x - 1) % MOD;
}

int main(){
  cin.tie(0);
  cin.sync_with_stdio(0);
  int t;
  cin >> t;

  while(t--){
    ull n;
    cin >> n;
    cout << (pow(n,n+1) - n + 1 + MOD ) % MOD << endl;
  }
  return 0;
}
