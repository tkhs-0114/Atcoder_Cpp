#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  MAKE(N);MAKE(M);
  int Al[N];
  for(int i=0; i<N; i++)Al[i]=0;
  for(int i=0; i<M; i++){
    MAKE(A);
    string B;cin >> B;
    if(B == "M"){
      if(Al[A-1] == 0){COUT("Yes");}
      else{COUT("No");}
      Al[A-1]++;
    }else{
      COUT("No");
    }
  }

  return 0;
}