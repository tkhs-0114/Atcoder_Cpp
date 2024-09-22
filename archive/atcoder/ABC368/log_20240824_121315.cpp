#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF = 2147483647;

int main() {

  MAKE(N);
  int A[N];
  AIN(A);
  int cnt =0;
  while(1){
    sort(A, A+N);
    A[N-1]--;
    A[N-2]--;
        cnt++;
    int cnt2 = 0;
    REP(i, N){
      if(A[i] > 0)cnt2++;
    }
    if(cnt2 <= 1)break;
  }
  COUT(cnt);

  return 0;
}