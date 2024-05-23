#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string B[N];
  for(int i=0; i<N; i++){
    cin >> B[i];
  }
  string List = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int cnt = 0;
  int Block[4][2][2] = {
    {
      {1,1},{1,0}
    },{
      {1,1},{0,1}
    },{
      {1,0},{1,1}
    },{
      {0,1},{1,1}
    }
  };
  for(int i=0; i<N-1; i++){
    for(int j=0; j<N-1; j++){
      bool flag = true;
      for(int p=0; p<4; p++){
        for(int ii=0; ii<2; ii++){
          for(int jj=0; jj<2; jj++){
            if(Block[p][ii][jj] == 1 && B[i+ii].at(j+jj) != '.')  flag = false;
          }
        }
        if(flag){
          for(int ii=0; ii<2; ii++){
            for(int jj=0; jj<2; jj++){
              if(Block[p][ii][jj] == 1)  B[i+ii].at(j+jj) = List.at(cnt);
            }
          }
          cnt++;
        }
        flag = true;
      }
    }
  }
  if(cnt == 0)cout << "No" << endl;
  else cout << "Yes" << endl;
  for(int i=0; i<N; i++){
    cout << B[i] << endl;
  }
}