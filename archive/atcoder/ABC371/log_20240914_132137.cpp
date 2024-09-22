#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  MAKE(N);
  MAKE(MG);
  int G[N+1][N+1] = {};
  REP(i, MG){
    MAKE(u);MAKE(v);
    G[u][v] = 1;
    G[v][u] = 1;
  }
  MAKE(MH);
  int H[N+1][N+1] = {};
  REP(i, MH){
    MAKE(u);MAKE(v);
    H[u][v] = 1;
    H[v][u] = 1;
  }
  int A[N+1][N+1] = {};
  for(int i=1; i<N; i++){
    for(int j=i+1; j<N+1; j++){
      MAKE(a);
      A[i][j] = a;
      A[j][i] = a;
    }
  }

  // for(int i=1; i<N+1; i++){
  //   REP(j, N+1){
  //     if(i <= j)cout << G[i][j] << " ";
  //     else cout << "  ";
  //   }
  //   cout << endl;
  // }
  // for(int i=1; i<N+1; i++){
  //   REP(j, N+1){
  //     if(i <= j)cout << H[i][j] << " ";
  //     else cout << "  ";
  //   }
  //   cout << endl;
  // }
  vector<int> l(N);
  for(int i=0; i<N; i++){
    l.at(i) = i+1;
  }
  long long  cnt = pow(INF, 2);
  do{
    //AOUT(l);
    int G2[N+1][N+1] = {};
    REP(i, N){
      REP(j, N){
        G2[l[i]][l[j]] = G[i+1][j+1];
      }
    }
    long long c = 0;
    for(int i=1; i<N+1; i++){
      REP(j, N+1){
        if(i <= j){
          if(G2[i][j] != H[i][j])c+= A[i][j];
        }
      }
    }
    if(cnt > c)cnt = c;

  }while(next_permutation(l.begin(), l.end()));
  COUT(cnt);
  return 0;
}