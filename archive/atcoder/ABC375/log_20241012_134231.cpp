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
  char B[N+1][N+1];

  for(int x=1; x<=N; x++){
    string S;cin >> S;
    for(int y=1; y<=N; y++){
      A[x][y] = S.at(y-1);
    }
  }

  for(int x=1; x<=N; x++){
    for(int y=1; y<=N; y++){
      int nx,ny,cnt=0;
      nx=x;ny=y;
      do{
        cnt++;
        int ix,iy;
        ix=nx;iy=ny;
        nx=iy;
        ny=N+1-ix;
      }while(cnt<nx && nx<N+1-cnt && cnt<ny && ny<N+1-cnt);
      B[nx][ny] = A[x][y];
    }
  }

  for(int x=1; x<=N; x++){
    for(int y=1; y<=N; y++){
      cout << B[x][y];
    }
    cout << endl;
  }


  return 0;
}