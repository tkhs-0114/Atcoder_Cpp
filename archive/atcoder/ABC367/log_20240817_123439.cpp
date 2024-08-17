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
  int NOW = N-1;
  while(1){
      int cnt=0;
      for(int j=0; j<N;j++)cnt += O[j];
      if(cnt%K == 0){AOUT(O);}
      while(R[NOW] >= O[NOW]){
        O[NOW]++;
        if(R[NOW] < O[NOW]){
          O[NOW] = 1;
          NOW--;
        }else break;
        if(NOW < 0)return 0;
      }
      NOW = N-1;
  }

  return 0;
}