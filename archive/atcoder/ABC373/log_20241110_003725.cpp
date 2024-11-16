#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  int N, M;
  cin >> N >> M;
  int X[M+1];
  for(int i=1; i<=M; i++)cin >> X[i];
  int A[M+1];
  for(int i=1; i<=M; i++)cin >> A[i];

  int Q;
  cin >> Q;
  long long N[Q];
  long long L[Q];
  for(auto& n:N)n=-1;
  int ni= 0;

  for(int i=0; i<Q; i++){
    int q;
    cin >> q;
    if(q == 1){
      if(T[ni] == 0)T[ni]++;
      else{
        T[tin+1] = 0;
        tn++;
      }
    }
    if(q == 2){
      int W;cin >> W;
      T[ti-1] += W;
    }
    if(q == 3){
      int H;cin >> H;
    }
  }

  return 0;
}