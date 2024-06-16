#include <bits/stdc++.h>
using namespace std;

void Compress(vector<int>& A){
  vector<int> B(A);
  sort(B.begin(), B.end());
  B.erase(unique(B.begin(), B.end()), B.end());
  for (auto& a:A) {
    a = lower_bound(B.begin(), B.end(), a)-B.begin();
  }
}

int main() {

  int H, W, N;
  cin >> H >> W >> N;
  vector<int> A(N);
  vector<int> B(N);
  for(int i=0; i<N; i++){
    cin >> A.at(i) >> B.at(i);
  }
  Compress(A);
  Compress(B);
  for(int i=0; i<N; i++){
    cout << A.at(i)+1 << " " << B.at(i)+1 << endl;
  }
  return 0;
}