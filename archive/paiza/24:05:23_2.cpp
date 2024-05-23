#include <bits/stdc++.h>
using namespace std;

int main() {
  int H,W;
  char K;
  cin >> H >> W >> K;
  string s;
  int now = -1;

  cin >> s;
  for(int i=0; i<W; i++){
    if(s.at(i) == K)now = i;
  }
  //cout << now << endl;
  for(int i=1; i<H-1; i++){
    cin >> s;
    if(now != 0 && s.at(now-1) == '.'){
      while(now != 0 && s.at(now-1)!='#')now--;
    }else{
      while(now != W-1 && s.at(now+1)!='#')now++;
    }
    //cout << now << endl;
  }
  cin >> s;
  cout << s.at(now) << endl;
}