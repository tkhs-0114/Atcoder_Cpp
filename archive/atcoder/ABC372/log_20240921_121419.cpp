#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {
  int list[] = {1,3,9,27,81,243,729,2187,6561,19683,59049,177147};
  int M; cin >> M;
  int cnt = 0;
  vector<int> output;
  for(int i=11; i>=0; i--){
    if(M >= list[i]){
      cnt++;
      output.push_back(i);
      M -= list[i];
      i++;
    }
  }
  cout << cnt << endl;
  for(auto a:output){
    cout << a << " ";
  }
  cout << endl;

  return 0;
}