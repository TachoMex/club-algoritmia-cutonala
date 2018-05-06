#include <iostream>
#include <cstring>

using namespace std;

char map[1100][1100];

int visited[4][1100][1100];

int queue_data[4 * 5 * 1000000];
int queue_top;
int queue_front;


void push(int a){
  queue_data[queue_top++] = a;
}

int pop(){
  return queue_data[queue_front++];
}

bool empty(){
  return queue_top == queue_front;
}

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int main(){
  cin.tie(0);
  cin.sync_with_stdio(0);

  int t;

  cin >> t;

  while(t--){
    memset(visited, 0, sizeof(visited));
    int n, m;
    cin >> n >> m;
    for(int i = 0; i< n; i++){
      cin >> map[i];
    }
    int ji, jj, ei, ej;
    for(int i=0; i <n; i++){
      for(int j=0; j<m; j++){
        if(map[i][j] == 'E'){
          ei = i;
          ej = j;
        }
        if(map[i][j] == 'J'){
          ji = i;
          jj = j;
        }
      }
    }

    push(0);
    push(ji);
    push(jj);

    while(!empty()){
      int k = pop();
      int i = pop();
      int j = pop();
      int dist = visited[k][i][j] + 1;
      if(map[i][j] == 'K'){
        k |= 2;
      }
      if(map[i][j] == 'F'){
        k |= 1;
      }
      for(int z = 0; z < 4; z++){
        int a = i + dx[z];
        int b = j + dy[z];
        if(
            a >= 0 && a <= n &&
            b >= 0 && b <= m &&
            !visited[k][a][b] && map[a][b] != '#'
          ){
          push(k);
          push(a);
          push(b);
          visited[k][a][b] = dist;
        }
      }
    }

    cout << visited[3][ei][ej] << '\n';
  }

  return 0;
}
