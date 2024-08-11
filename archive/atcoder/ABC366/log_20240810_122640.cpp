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
  string S[N];
  AIN(S);
  int MAX = 0;
  for(auto s:S){
    if(MAX < (int)s.length()){MAX = (int)s.length();}
  }
  REP(i,MAX){
    int cnt = 0;
    for(int j=N-1; j>=0; j--){
      if((int)S[j].length() > i){
        REP(k,cnt){cout << "*";}
        cout << S[j].at(i);
      }else{
        cnt++;
      }

    }
    cout << endl;
  }

  return 0;
}