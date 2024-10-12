#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF 2147483647

int main() {

  string S, T;
  cin >> S >> T;
    int i=0;
    while(i < (int)min(S.length(), T.length())){
      if(S.at(i) != T.at(i)){
        COUT(i+1);
        return 0;
      }
      i++;
    }
    if(S.length() != T.length()){
      COUT(min(S.length(), T.length())+1);
    }else{
      COUT(0);
    }

  return 0;
}