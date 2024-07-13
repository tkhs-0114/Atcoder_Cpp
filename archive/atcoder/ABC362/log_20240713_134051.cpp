#include <bits/stdc++.h>
using namespace std;

int main() {

  int N,M;
  cin >> N >> M;
  int A[N];
  for(auto& a:A){
    cin >> a;
  }
  int G[N][N] = {};
  int c[N][N] = {};
  for(int i=0; i<M; i++){
    int u,v,b;
    cin >> u >> v >> b;
    if(u > v){
      int temp = u;
      u = v;
      v = temp;
    }
    if(c[u-1][v-1] == 0){
      c[u-1][v-1] = 1;
      G[u-1][v-1] = b;
      G[v-1][u-1] = b;
    }else{
      if(G[u-1][v-1] > b){
        G[u-1][v-1] = b;
        G[v-1][u-1] = b;
      }
    }
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      cout << G[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}