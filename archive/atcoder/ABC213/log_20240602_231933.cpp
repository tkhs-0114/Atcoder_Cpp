#include <bits/stdc++.h>
using namespace std;

int main() {

  int H,W;
  cin >> H >> W;
  int A[H][W];
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      cin >> A[i][j];
      cout << A[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  sort(A[0], A[0]+W);
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      cout << A[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}