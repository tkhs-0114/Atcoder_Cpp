#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF = 2147483647;

int main() {

  MAKE(N);
  int A[N][N][N];
  int A2[N][N][N];
  REP(z,N){
    REP(x,N){
      REP(y,N){
        cin >> A[z][x][y];
        if(z == 0){
          if(x == 0){
            if(y==0){
              A2[z][x][y] = A[z][x][y];
            }else{
              A2[z][x][y] = A[z][x][y] + A2[z][x][y-1];
            }
          }else{
            if(y==0){
              A2[z][x][y] = A[z][x][y] + A2[z][x-1][y];
            }else{
              A2[z][x][y] = A[z][x][y] + A2[z][x][y-1] + A2[z][x-1][y] - A2[z][x-1][y-1];
            } 
          }
        }else{
          if(x == 0){
            if(y==0){
              A2[z][x][y] = A[z][x][y]+A2[z-1][x][y];
            }else{
              A2[z][x][y] = A[z][x][y] + A2[z][x][y-1]+A2[z-1][x][y]- A2[z-1][x][y-1];
            }
          }else{
            if(y==0){
              A2[z][x][y] = A[z][x][y] + A2[z][x-1][y]+A2[z-1][x][y]- A2[z-1][x-1][y];;
            }else{
              A2[z][x][y] = A[z][x][y] + A2[z][x][y-1] + A2[z][x-1][y]+A2[z-1][x][y];
            } 
          }
        }
        cout << A2[z][x][y] << " ";
      }
      cout << endl;
    }
  }

  return 0;
}