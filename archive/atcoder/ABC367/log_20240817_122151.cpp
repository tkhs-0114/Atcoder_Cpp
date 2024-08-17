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
  int R[N];
  AIN(R);
  int O[N];
  for(auto& o:O)o=1;
  for(int i=N-1; i>=0;i--){
    while(R[i] >= O[i]){
      int cnt=0;
      for(int j=0; j<N;j++){
        cnt += O[j];
      }
      if(cnt%K == 0){
        AOUT(O);
      }
      O[i]++;
    }
    O[i] = 1;
  }

  return 0;
}