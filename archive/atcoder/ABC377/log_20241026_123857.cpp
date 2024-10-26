#include <bits/stdc++.h>
using namespace std;

#define COUT(x) cout << x << endl;
#define AOUT(A) for(auto a:A){cout << a << " ";}cout << endl;
#define REP(i, n) for(int i = 0; i < (n); i++)
#define AIN(A) for(auto& a:(A))cin >> a;
#define MAKE(a) int a;cin >> a; 
#define INF = 2147483647;
bool l(int a, int b, int n){
  return ((1<=a && a<=n) && (1<=b && b<= n));
}

int main() {

  long long N,M;
  cin >> N >> M;
  vector<pair<int ,int>> G;
  for(int i=0; i<M; i++){
    int a,b;
    cin >> a >> b;
    G.push_back({a,b});
    if(l(a+2,b+1,N))G.push_back({a+2, b+1});
    if(l(a+1,b+2,N))G.push_back({a+1, b+2});
    if(l(a-1,b+2,N))G.push_back({a-1, b+2});
    if(l(a-2,b+1,N))G.push_back({a-2, b+1});
    if(l(a-2,b-1,N))G.push_back({a-2, b-1});
    if(l(a-1,b-2,N))G.push_back({a-1, b-2});
    if(l(a+1,b-2,N))G.push_back({a+1, b-2});
    if(l(a+2,b-1,N))G.push_back({a+2, b-1});
  }
  sort(G.begin(), G.end());
  size_t cnt = G.size();
  for(size_t i=0; i<G.size()-1; i++){
    if(G.at(i).first == G.at(i+1).first){
      if(G.at(i).second == G.at(i+1).second){
        cnt--;
        G.at(i) = {0,0};
      }
    }
  }
  // for(auto g:G){
  //   cout << g.first << " " << g.second << endl;
  // }
  COUT((N*N)-cnt);

  return 0;
}