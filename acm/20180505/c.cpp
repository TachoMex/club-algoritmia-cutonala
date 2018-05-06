#include <iostream>

using namespace std;

int cables[1000000];
int f(int x, int n){
  int sum = 0;
  for(int i = 0; i < n; i++){
    sum += cables[i] / x;
  }
  return sum;
}

int main(){
  cin.tie(0);
  cin.sync_with_stdio(0);

  int t;

  cin >> t;

  while(t--){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
      cin >> cables[i];
    }
    int last = 0;
    int i = 1;
    int j = 1000000000;
    while(i <= j){
      int med = (i + j) >> 1;
      int f_med = f(med, n);
      if(f_med >= k){
        last = med;
      }
      if(f_med >= k){
        i = med + 1;
      }else{
        j = med - 1;
      }
    }
    cout << last << '\n';
  }

  return 0;
}
