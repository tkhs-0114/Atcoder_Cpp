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
  long long F[N];
  F[0] = 0;
  for(int i=1; i<N; i++){
    F[i] = F[i-1]+i;
  }

  int xi = M;
  int stack = 0;
  int cnt = 0;
  for(int i=N; i>0; i--){
    if(X[xi] == i){
      int s = stack;
      stack += A[xi];
      if(stack > 0)stack=0;
      else stack --;
      cnt += F[-1*s];
      if(stack <= -1)cnt -= F[-1*(stack+1)];

      xi--;
    }else{
stack --;
    }
  }
  if(stack != 0){
    COUT(-1);
  }else{
    COUT(cnt);
  }

  return 0;
}