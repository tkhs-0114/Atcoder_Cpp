#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF = 2147483647;

int main() {

  MAKE(N);MAKE(M);
  int A[N];
  AIN(A);
  long long Ap[N*2];
  Ap[0] = 0;
  for(int i=1; i<=N; i++){
    Ap[i] = Ap[i-1] + A[i-1];
  }
  for(int i=0; i<N; i++){
    Ap[i+N+1] = Ap[i+N] + A[i];
  }
  AOUT(Ap);
  for(int i=0; i<N*2; i++){
    Ap[i] = Ap[i]%M;
  }
  // AOUT(Ap);
  long cnt = 0;
  for(int i=1; i<=N*2-2; i++){
    int js = 0;
    if(i >= 4)js=i-3;
    //cout << "js" << js << endl;
    for(int j=js; j<i; j++){
      cout << j << "," << i << " " << Ap[i]-Ap[j] << endl;
      //COUT(Ap[i]-Ap[j]);
      if(Ap[i]-Ap[j] == 0)cnt++;
    }
    COUT(cnt);
  }
  return 0;
}