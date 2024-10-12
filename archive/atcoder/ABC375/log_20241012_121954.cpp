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
  long double nx, ny;
  nx=0;ny=0;
  long double cst = 0;
  for(int i=0; i<N; i++){
    long double ix,iy;
    cin >> ix >> iy;
    cst += sqrt(static_cast<long double>((nx-ix)*(nx-ix))+((ny-iy)*(ny-iy)));
    nx = ix;
    ny = iy;
  }
      long double ix,iy;
    ix = 0; iy =0 ;
    cst += sqrt(static_cast<long double>((nx-ix)*(nx-ix))+((ny-iy)*(ny-iy)));
    cout << std::setprecision(20);
  cout << cst << endl;
  return 0;
}