#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  int N;
  cin >> N;
  bool A[N+1][N+1][(N/2)+1];
  for(int i=1; i<=N; i++){
    string S;
    cin >> S;
    for(int j=0; j<N; j++){
      if(S.at(j) == '#')A[i][j+1][0] = true;
      else A[i][j+1][0] = false;
    }
  }
  for(int i=1; i<=(N/2); i++){
    for(int x=1; x<=N; x++){
      for(int y=1; y<=N; y++){
        if(i<=x && x<=(N+1-i) && i<=y && y<=(N+1-i)){
          A[y][N+1-x][i] = A[x][y][i-1];
        }
      }
    }
    for(int x=i; x<=(N+1-i); x++){
      for(int y=i; y<=(N+1-i); y++){
        if(A[x][y][i-1] == true)A[y][N+1-x] = 1;
        else B[y][N+1-x] = -1;
      }
    }
  }
  for(int i=1; i<=N; i++){
    for(int j=1; j<=N; j++){
      if(A[i][j] == true){
        cout << "#";
      }else{
        cout << ".";
      }
    }
    cout << endl;
  }

  return 0;
}