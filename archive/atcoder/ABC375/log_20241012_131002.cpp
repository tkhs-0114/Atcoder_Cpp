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
  char A[N+1][N+1];

  for(int x=1; x<=N; x++){
    string S;cin >> S;
    for(int y=1; y<=N; y++){
      A[x][y] = S.at(y-1);
    }
  }

  for(int i=1; i<=(N/2); i++){
    char B[N+1][N+1] = {};
    for(int x=1; x<=N; x++){
      for(int y=1; y<=N; y++){
        B[x][y] = ' ';
      }
    }
    for(int x=i; x<=(N+1-i); x++){
      for(int y=i; y<=(N+1-i); y++){
        B[y][N+1-x] = A[x][y];
      }
    }
    for(int x=1; x<=N; x++){
      for(int y=1; y<=N; y++){
        if(B[x][y] != ' ')A[x][y] = B[x][y];
      }
    }
    for(int x=1; x<=N; x++){
      for(int y=1; y<=N; y++){
        cout << A[x][y];
      }
      cout << endl;
    }
    cout << endl;
  }

  for(int x=1; x<=N; x++){
    for(int y=1; y<=N; y++){
      cout << A[x][y];
    }
    cout << endl;
  }

  return 0;
}