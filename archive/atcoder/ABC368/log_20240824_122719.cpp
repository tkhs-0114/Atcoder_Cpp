#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF = 2147483647;

int main() {

  long long T = 0;
  MAKE(N);
  int H[N];
  AIN(H);
  REP(i, N){
    T += (H[i]/5)*3;
    H[i] = H[i]%5;
  //  cout << T << " " << i << " " << H[i] << endl;
    while(H[i] > 0){
      T++;
      if(T%3 == 0)H[i] -= 3;
      else H[i]--;
      // cout << T << " " << i << " " << H[i] << endl;
    }
  }
  COUT(T);

  return 0;
}