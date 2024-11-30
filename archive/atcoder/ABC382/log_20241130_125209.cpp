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

  int num = M-(1+10*(N-1))+1;
  
  int cnt = 0;
  for(int i=1; i<=num; i++){
    cnt += i * (num-i+1);
  }
  COUT(cnt);

  int A[N];
  for(int i=0; i<N; i++)A[i] = 1+(i*10);
  for(int i=0; i<cnt; i++){
    while(A[N-1] <= M){
      for(auto a:A)cout << a << " ";
      cout << endl;
      A[N-1]++;
    }
  }

  return 0;
}