#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  int P[2*N];
  for(int i=0; i<2*N; i++){
    cin >> P[i];
    
  }
  int cnt = 0;
  for(int i=0; i<2*N-2; i++){
    if(P[i] == P[i+2])cnt++;
  }
  cout << cnt << endl;

  return 0;
}