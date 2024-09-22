#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF = 2147483647;

int main() {

  MAKE(N);MAKE(K);
  vector<int> G[N];
  REP(i, N-1){
    MAKE(A);MAKE(B);
    G[A].push_back(B);
    G[B].push_back(A);
  }
  int V[K];
  AIN(V);



  
  REP(i, N-1){
    cout << i<< ":";
    AOUT(G[i]);
  }
  AOUT(V);
  return 0;
}