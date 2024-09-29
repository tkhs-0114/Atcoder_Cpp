#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  int cnt =0;
  for(int i=1; i<=12; i++){
    string s;
    cin >> s;
    if((int)(s.length()) == i)cnt++;

  }
  COUT(cnt);

  return 0;
}