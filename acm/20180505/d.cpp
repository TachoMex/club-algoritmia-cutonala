#include <iostream>
using namespace std;

int rep_unit(int n){
  if(n<=1){
    return 1;
  }
  int k = 1;
  int sum = 1;
  int pot = 1;
  while(sum){
    k++;
    pot = (pot * 10) % n;
    sum += pot;
    sum %= n;
  }
  return k;
}

int main(){
  cin.tie(0);
  cin.sync_with_stdio(0);

  int t;

  cin >> t;

  while(t--){
    int n;
    cin >> n;
    cout << rep_unit(n) << '\n';
  }

  return 0;
}
