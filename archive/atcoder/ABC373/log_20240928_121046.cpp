#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  string S;
  cin >> S;
  int now;
  int cnt =0;
  for(int i=0; i<26; i++){
    if(S.at(i) == 'A')now = i;
  }
  string L = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  for(int k=0; k<26; k++){
    int next;
    for(int i=0; i<26; i++){
      if(L.at(k) == S.at(i))next = i;
    }
    cnt += abs(now - next);
    now = next;
  }
  COUT(cnt);
  

  return 0;
}