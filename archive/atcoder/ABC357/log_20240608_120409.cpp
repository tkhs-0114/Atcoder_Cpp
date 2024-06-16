#include <bits/stdc++.h>
using namespace std;

int main() {

  int N,M;
  cin >> N >> M;
  for(int i=1; i<=N; i++){
    int H;
    cin >> H;
    M -= H;
    if(M < 0){
      cout << i-1 << endl;
      return 0;
    }
  }
  cout << N << endl;

  return 0;
}