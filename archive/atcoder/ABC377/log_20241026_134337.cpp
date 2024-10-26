#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF = 2147483647;
int List[200001];

// int F(int L, int R,int Li, long long cnt, vector<pair<int ,int>> G){
//   cout << L << "-" << R << endl;
//   cnt += F(L+1)
//   return cnt;
// }

int main() {
  List[1]=1;
for(int i=2; i<200001; i++){
  List[i] = i+List[i-1];
}

  int N,M;
  cin >> N >> M;
  vector<pair<int ,int>> G;
  for(int i=0; i<N; i++){
    int L,R;
    cin >> L >> R;
    G.push_back({L,R});
  }
  sort(G.begin(), G.end());
  for(auto g:G){
    cout << g.first << " " << g.second << endl;
  }
  long long cnt; //= F(1, M, 0, 0, G);

  int L, R;
  L = 1;
  R = G.at(0).second;
  cnt += List[R-L+1]-1-0;
  L = R;
  R = G.at(1).first;
  cnt += List[R-L+1]-0-1;
  L = R;
  R = G.at(1).second;
  cnt += List[R-L+1]-1-1;
  COUT(cnt);
  
  return 0;
}