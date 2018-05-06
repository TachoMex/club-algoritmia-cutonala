#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int G[20][20];
bool visited[20];
int perms[20];

void print_perm(int n){
  for(int i = 0; i < n; i++){
    cout << perms[i];
    if(i != n - 1)
      cout << ' ';
  }
  cout << '\n';
}

bool valid_permutation(int n){
  memset(visited, 0, sizeof(visited));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(G[perms[i]][j] && !visited[j]){
        // print_perm(n);
        // cout << "breaken because " << perms[i] << " depends on " << j << '\n';
        // cout << " -------------------- " << '\n';
        return false;
      }
    }
    visited[perms[i]] = true;
  }
  return true;
}

int main(){
  int t;
  cin >> t;

  while(t--){
    memset(G, 0, sizeof(G));
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
      perms[i] = i;
      int k;
      cin >> k;
      for(int j = 0; j < k; j++){
        int a;
        cin >> a;
        // cout << i << " depends on " << j << endl;
        G[i][a] = true;
      }
    }
    // for(int i = 0; i < n; i++){
    //   for(int j= 0; j < n; j++){
    //     cout << G[i][j] << ' ';
    //   }
    //   cout << endl;
    // }
    do{
      if(valid_permutation(n)){
        print_perm(n);
      }
    }while(next_permutation(perms, perms + n));
  }
  return 0;
}
