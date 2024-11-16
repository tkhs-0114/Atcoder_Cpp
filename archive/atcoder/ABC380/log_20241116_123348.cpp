#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;

  int c0 = 0, c1 = 0;
  int cnt = 0;
  char pre = S.at(0);
  for(int i=0; i<N; i++){
    if(pre == '1' && S.at(i) == '0'){
      cnt++;
      if(cnt == K){
        for(int j=0; j<c1; j++)cout << '1';
        for(int j=0; j<c0; j++)cout << '0';
      }else{
        for(int j=0; j<c0; j++)cout << '0';
        for(int j=0; j<c1; j++)cout << '1';
      }
      c0=0;c1=0;
    }
    if(S.at(i) == '0')c0++;
    if(S.at(i) == '1')c1++;
    pre = S.at(i);
  }
  if(cnt < K){
    for(int j=0; j<c1; j++)cout << '1';
    for(int j=0; j<c0; j++)cout << '0';
  }else{
    for(int j=0; j<c0; j++)cout << '0';
    for(int j=0; j<c1; j++)cout << '1';
  }

  cout << endl;


  return 0;
}