#include <iostream>
#include <string>

using namespace std;

char cypher(char c, int k){
  if(c >= 'A' && c <= 'Z'){
    return ((c - 'A') + k) % 26 + 'A';
  }
  return c;
}

int main(){
  cin.tie(0);
  cin.sync_with_stdio(0);

  int t;

  cin >> t;

  while(t--){
    int n, k;
    cin >> n >> k;
    string s;

    cin.ignore();

    for(int i = 0; i < n; i++){
      getline(cin, s);
      for(char c: s){
        cout << cypher(c, k);
      }
      cout << '\n';
    }
  }

  return 0;
}
