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
  int cnt = 0;
  for(auto s:S){
    if(s == '|'){
      if(cnt != 0)cout << cnt << " ";
      cnt = 0;
    }else{
      cnt++;
    }
  }
  cout << endl;

  return 0;
}