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
  string S;
  cin >> N;
  cin >> S;
  int cnt =0;
  for(int i=0; i<N-2; i++){
    if(S.at(i)=='#' && S.at(i+1)=='.' && S.at(i+2)=='#'){
      cnt++;
    }
  }
  COUT(cnt);

  return 0;
}