#include <bits/stdc++.h>
using namespace std;

int main() {

  int N,M,cnt=0;
  cin >> N >> M;
  vector<int> A(N);
  vector<int> B(M);
  for(auto& a:A){
    cin >> a;
  }
  for(auto& b:B){
    cin >> b;
  }
  int start =0;
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  for(auto b:B){
    for(int j=start; j<=N; j++){
      if(j == N){
        cout << -1 << endl;
        return 0;
      }
      //cout << A[j];
      if(A[j] >= b){
        start  = j+1;
        cnt += A[j];
        //cout << A[j] << endl;
        A[j] = 0;
        break;
      }
    }
    //cout << endl;
  }
  cout << cnt << endl;
  return 0;
}