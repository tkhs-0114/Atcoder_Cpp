#include <bits/stdc++.h>
using namespace std;

#define TO_STRING(VariableName) # VariableName
#define DOUT(x) cout << TO_STRING(x) << ":" << x << endl;
#define DOUT2(i,x) cout << i << ":" << x << endl;
#define COUT(x) cout << x << endl;
#define REP(i, n) for (int (i) = 0; (i) < (n); ++(i))
#define INN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF = 2147483647;

template<class... T>
void input(T&... a){
    (cin >> ... >> a);
}

int main() {

  int A,B,C;
  input(A,B,C);
  COUT(A);COUT(B);COUT(C);

  return 0;
}