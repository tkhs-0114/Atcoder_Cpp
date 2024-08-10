#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, Q;
  cin >> N >> Q;
  int A[N];
  for(auto& a:A)cin >> a;
  sort(A, A+N);
  //for(auto a:A)cout << a << endl;

  for(int i=0; i<Q; i++){
    //int AA[N];
    //memcpy(&AA, &A, sizeof(A));
    int B,K;
    cin >> B >> K;
    int j=0;
    while(A[j] < B && j < N)j++;
    //cout << j << " ";
    int cnt =0, u=0, d=1;
    int b=0;
    while(cnt < K){//while(cnt < K)
      if(j-d < 0||(j+u < N && abs(A[j+u] - B) < abs(A[j-d] - B))){
        b = abs(A[j+u] - B);
        u++;
      }else{
        b = abs(A[j-d] - B);
        d++;
      }
      cnt++;
      // cout << b <<endl;
      // cout << u << " " << d << endl;
    }
    cout << b << endl;

    //for(int i=0;i<N; i++)AA[i] = abs(A[i]-B);

  }
  return 0;
}