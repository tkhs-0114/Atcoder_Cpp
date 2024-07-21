#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, T ,P;
  cin >> N >> T >> P;
  int L[N];
  for(auto& l:L)cin >> l;
  sort(L, L+N);
  int c = L[N-P];
  if(c > T)cout << 0 << endl;
  else cout << T-c << endl;

  return 0;
}