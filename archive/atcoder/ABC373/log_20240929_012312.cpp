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
  int X[N+1];
  int F[N+1];
  int S[N+1];
  int cnt =1;
  vector<int> K;
  for(auto& f:F)f = 0;
  for(int i=0; i<M; i++){
    int u,v,w;
    cin >> u >> v >> w;
    if(!F[u] && !F[v]){
      X[u] = 0;
      X[v] = X[u]+w;
      S[u] = cnt;
      F[u]=cnt;F[v]=cnt;
      cnt++;
    }else if(F[u] && !F[v]){
      X[v] = X[u]+w;
      F[v]=F[u];
    }else if(!F[u] && F[v]){
      X[u] = X[v]-w;
      F[u]=F[i];
    }else if(F[u] && F[v]){
      for(int j=1; j<=N; j++){
        if(F[j] == F[v]){
          F[j] = F[u];
          X[j] = X[j] + X[u];
        }
      }
    }
  }
  // for(int i=0; i<=(int)K.size(); i+=2){
  //   cout << K[i] << "=" << K[i+1];
  //   cout << endl;
  //   for(auto& f:F)if(f==K[i])f=K[i+1];
  // }

  for(auto x:X)cout << x << " ";
  cout << endl;
  for(auto f:F)cout << f << " ";
  cout << endl;
  for(auto k:K)cout << k << " ";
  cout << endl;
  for(int i=1; i<=N; i++)cout << X[i] << " ";
  cout << endl;

  return 0;
}