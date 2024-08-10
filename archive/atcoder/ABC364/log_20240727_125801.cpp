#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, Q;
  cin >> N >> Q;
  int A[N];
  for(auto& a:A)cin >> a;
  //sort(A, A+N);
  //for(auto a:A)cout << a << endl;

  for(int i=0; i<Q; i++){
    int AA[N];
    memcpy(&AA, &A, sizeof(A));
    int B,K;
    cin >> B >> K;
    for(auto& a:AA)a = abs(a-B);
    sort(AA, AA+N);
    cout << AA[K-1] << endl;

  }
  return 0;
}