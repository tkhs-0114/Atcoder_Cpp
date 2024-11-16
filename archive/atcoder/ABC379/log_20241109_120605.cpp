#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  int N , K;
  cin >> N >> K;

  string S;
  cin >> S;
  int cnt = 0;
  int sum = 0;
  for(int i=0; i<N; i++){
    if(S.at(i) == 'O'){
      cnt++;
    }else{
      cnt = 0;
    }
    if(cnt == K){
      sum++;
      cnt = 0;
    }
  }
  COUT(sum);
  return 0;
}