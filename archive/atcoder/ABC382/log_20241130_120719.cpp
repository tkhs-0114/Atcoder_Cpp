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
  int D;
  string S;
  cin >> N >> D;
  cin >> S;

  for(int i=N-1; i>=0; i--) {
    if(S.at(i) == '@' && D > 0) {
      S.at(i) = '.';
      D--;
    }
  }
  cout << S << endl;

  return 0;
}