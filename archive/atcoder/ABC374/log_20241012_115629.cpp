#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 10000

int main() {

  int N;
  cin >> N;
  int S, T;
  cin >> S >> T;
  double G[N*2+1][N*2+1];
  for(int i=0; i<N*2+1; i++){
    for(int j=0; j<N*2+1; j++){
      G[i][j] = INF;
    }
  }
  for(int i=0; i<N; i++){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    int p1, p2;
    p1 = 1+(i*2)+0;
    p2 = 1+(i*2)+1;
    double cst = T*sqrt(((A-C)*(A-C))+((B-D)*(B-D)));
    G[p1][p2] = cst;
    G[p2][p1] = cst;
  }

  for(int i=0; i<N*2+1; i++){
    for(int j=0; j<N*2+1; j++){
      cout << G[i][j] << "\t";
    }
    cout << endl;
  }


  return 0;
}