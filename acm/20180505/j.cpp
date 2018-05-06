#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  cin.sync_with_stdio(0);

  int t;

  cin >> t;

  while(t --){
    int a, b;
    cin >> a >> b;
    int x = (b - a + 1) >> 1;
    int joy = x, misery = x;
    if((b - a + 1) & 1){
      (a & 1 ? misery : joy ) += 1;
    }
    cout << joy << ' ' << misery << '\n';
  }

  return 0;
}
