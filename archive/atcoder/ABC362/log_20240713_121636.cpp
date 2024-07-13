#include <bits/stdc++.h>
using namespace std;

int main() {

  int h[3][2];
  double H[3];
  for(int i=0; i<3; i++){
    cin >> h[i][0]; 
    cin >> h[i][1];
  }
  H[0] = sqrt(pow(h[1][0]-h[2][0],2)+pow(h[1][1]-h[2][1],2));
  H[1] = sqrt(pow(h[0][0]-h[2][0],2)+pow(h[0][1]-h[2][1],2));
  H[2] = sqrt(pow(h[0][0]-h[1][0],2)+pow(h[0][1]-h[1][1],2));
  sort(H, H+3);
  if(pow(H[0],2)+pow(H[1],2) == pow(H[2],2)){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
 //cout << H[0] << H[1] << H[2] << endl;

  return 0;
}