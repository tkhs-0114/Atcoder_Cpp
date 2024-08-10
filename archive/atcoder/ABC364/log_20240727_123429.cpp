#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  long X, Y;
  cin >> N >> X >> Y;
  int A[N];
  int B[N];
  for(auto& a:A)cin >> a;
  for(auto& b:B)cin >> b;
  sort(A, A+N);
  sort(B, B+N);
  long cX=0, cY=0;
  //cout << X << Y << endl;
  for(int i=N-1; i>=0; i--){
    cX += A[i];
    cY += B[i];
    if(cX > X || cY > Y){
      cout << N-i << endl;
      return 0;
    }
    // cout << cX << endl;
    // cout << cY << endl;
  }
  cout << N << endl;

  return 0;
}