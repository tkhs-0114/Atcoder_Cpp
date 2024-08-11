#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  MAKE(Q);
  int L[Q];int X[Q];
  int MAX = 0;
  REP(i,Q){
    cin >> L[i];
    if(L[i] != 3){
      cin >> X[i];
      if(MAX < X[i]){MAX = X[i];}
    }
  }
  //cout << MAX << endl;
  int LIST[1000000];
  REP(i, MAX)LIST[i] = 0;

  int cnt = 0;
  REP(i, Q){
    if(L[i] == 3){
      cout << cnt << endl;
    }else if(L[i] == 1){
      if(LIST[X[i]] == 0)cnt++;
      LIST[X[i]]++;
    }else if(L[i] == 2){
      LIST[X[i]]--;
      if(LIST[X[i]] == 0)cnt--;
    }
  }

  return 0;
}