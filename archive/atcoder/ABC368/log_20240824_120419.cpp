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
  int A[N];
  AIN(A);
  for(int i=N-K; i<N; i++){
    cout << A[i] << " ";
  }
  for(int i=0; i<N-K; i++){
    cout << A[i] << " ";
  }
  cout << endl;

  return 0;
}