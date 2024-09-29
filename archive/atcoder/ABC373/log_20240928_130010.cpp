#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  int N,M;
  cin >> N >> M;
  vector<int> G[N+1];
  vector<int> W[N+1];
  int X[N+1];
  bool F[N+1];
  for(auto& f:F)f = false;
  for(int i=0; i<M; i++){
    int u,v,w;
    cin >> u >> v >> w;
    if(!F[u] && !F[v]){
      X[u] = 0;
      X[v] = X[u]+w;
    }else if(F[u] && !F[v]){
      X[v] = X[u]+w;
    }else if(!F[u] && F[v]){
      X[u] = X[v]-w;
    }
    F[u]=true;F[v]=true;
  }
  for(int i=1; i<=N; i++)if(!F[i])X[i]=0;
  for(int i=1; i<=N; i++)cout << X[i] << " ";
  cout << endl;

  return 0;
}