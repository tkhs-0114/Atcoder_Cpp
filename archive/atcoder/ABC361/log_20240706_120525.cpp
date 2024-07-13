#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K, X;
  cin >> N >> K >> X;
  int A;
  for(int i=0; i<N; i++){
    cin >> A;
    cout << A << " ";
    if(i==K-1){
      cout << X << " ";
    }

  }
  cout << endl;

  return 0;
}