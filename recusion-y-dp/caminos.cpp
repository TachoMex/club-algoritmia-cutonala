#include <iostream>

using namespace std;

const int N = 1005;
char map[N][N];

int dp[N][N];

int f(int i, int j, int n, int m){
  if(i > n) return 0;
  if(j > n) return 0;
  if(i == n && j == m) return 1;
  if(map[i][j] == 'X') return 0;
  return f(i + 1, j, n, m) + f(i, j + 1, n, m);
}

int main(){
  int n, m;
  cin >> n >> m;
  for(int i = 1; i <= n; i++){
    cin >> (map[i] + 1);
  }

  dp[n][m] = 1;

  for(int i=n; i>= 1; i--){
    for(int j=m; j>= 1; j--){
      if(map[i-1][j] == '.')
        dp[i-1][j] += dp[i][j];
      if(map[i][j-1] == '.')
        dp[i][j-1] += dp[i][j];
    }
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cout << dp[i][j] << ' ';
    }
    cout << endl;
  }

  cout << "--------------" << endl;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cout << f(i, j, n, m) << ' ';
    }
    cout << endl;
  }

  return 0;
}
