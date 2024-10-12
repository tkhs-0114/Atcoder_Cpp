#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  int N;
  cin >> N;
  int K[N];
  for(auto& k:K)cin >> k;
  sort(K, K+N);
  long long A=0, B=0;

  long long score = INF;
  for(int bit=0; bit<(1<<N); bit++){
    for(int i=0; i<N; i++){
      if(bit & (1<<i)){
        A+=K[i];
      }else{
        B+=K[i];
      }
      //1つの組み合わせ
    }
    //cout << A << "," << B << endl;
    score = min(score, max(A, B));
    A=0;
    B=0;
  }
  COUT(score);

  return 0;
}