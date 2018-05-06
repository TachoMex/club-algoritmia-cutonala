#include <iostream>
#include <map>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
  int t;
  cin.tie(0);
  cin.sync_with_stdio(0);

  cin >> t;

  while(t--){
    int n;
    cin >> n;
    map<string, int> strings;
    for(int i = 0; i < n; i++){
      string s;
      cin >> s;
      sort(s.begin(), s.end());
      strings[s]++;
    }

    int res = 0;

    for(auto p: strings){
      int k = p.second;
      res += k * k;
    }
    cout << res << '\n';
  }

  return 0;
}
