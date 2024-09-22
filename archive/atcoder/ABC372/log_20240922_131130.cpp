#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  int N; cin >> N;
  int H[N+1];
  for(int i=1; i<=N; i++)cin >> H[i];
  // for(auto h:H)cout << h << " ";
  // cout << endl;
  for(int i=1; i<=N; i++){
    int MAX = 0, cnt = 0;
    for(int j=i+1; j<=N; j++){
      if(MAX < H[j]){
        MAX = H[j];
        cnt++;
      }
    }
    cout << cnt << " ";
  }
  cout << endl;

  return 0;
}